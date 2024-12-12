#include <iostream>
#include <cmath>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

// Function to count the number of digits in a number
int countDigits(int num) {
    return (num == 0) ? 1 : log10(abs(num)) + 1;
}

// Function to calculate the product of even digits in a number
int productOfEvenDigits(int num) {
    int product = 1, hasEven = false;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
            hasEven = true;
        }
        num /= 10;
    }
    return hasEven ? product : 0;
}

// Function to print the first and last digit and their sum
void printFirstAndLastDigit(int num) {
    int lastDigit = num % 10;
    int firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    cout << "First Digit: " << firstDigit << ", Last Digit: " << lastDigit << ", Sum: " << firstDigit + lastDigit << endl;
}

// Function to swap the first and last digit of a number
int swapFirstAndLastDigit(int num) {
    int numDigits = countDigits(num);
    int firstDigit = num / pow(10, numDigits - 1);
    int lastDigit = num % 10;
    num = num % (int)pow(10, numDigits - 1);
    num = num / 10;
    int swapped = lastDigit * pow(10, numDigits - 1) + num * 10 + firstDigit;
    return swapped;
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

// Function to print the frequency of each digit
void frequencyOfDigits(int num) {
    int freq[10] = {0};
    while (num != 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    cout << "Digit Frequency Table:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Digit " << i << ": " << freq[i] << " times" << endl;
    }
}

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a strong number
bool isStrongNumber(int num) {
    int sum = 0, originalNum = num;
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}

// Function to check if a number is a perfect number
bool isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) sum += i;
    }
    return sum == num;
}

int main() {
    int num, choice;

    cout << "Enter an integer: ";
    cin >> num;

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Reverse the number\n";
        cout << "2. Count the number of digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. Print first and last digit and their sum\n";
        cout << "5. Swap first and last digit\n";
        cout << "6. Check if palindrome\n";
        cout << "7. Frequency of each digit\n";
        cout << "8. Check if strong number\n";
        cout << "9. Check if perfect number\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Reversed Number: " << reverseNumber(num) << endl;
                break;
            case 2:
                cout << "Number of Digits: " << countDigits(num) << endl;
                break;
            case 3:
                cout << "Product of Even Digits: " << productOfEvenDigits(num) << endl;
                break;
            case 4:
                printFirstAndLastDigit(num);
                break;
            case 5:
                cout << "Number after Swapping First and Last Digit: " << swapFirstAndLastDigit(num) << endl;
                break;
            case 6:
                cout << (isPalindrome(num) ? "The number is a Palindrome." : "The number is not a Palindrome.") << endl;
                break;
            case 7:
                frequencyOfDigits(num);
                break;
            case 8:
                cout << (isStrongNumber(num) ? "The number is a Strong Number." : "The number is not a Strong Number.") << endl;
                break;
            case 9:
                cout << (isPerfectNumber(num) ? "The number is a Perfect Number." : "The number is not a Perfect Number.") << endl;
                break;
            case 0:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
