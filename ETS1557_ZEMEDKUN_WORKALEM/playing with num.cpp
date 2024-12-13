#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit = 0, rev = 0;
    
    // Read the number
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    // Reverse of the number
    rev = 0;
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    cout << "Reverse of the number: " << rev << endl;

    // Number of digits
    int count = 0;
    temp = num;
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    cout << "Number of digits: " << count << endl;

    // Sum of digits
    int sum = 0;
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout << "Sum of digits: " << sum << endl;

    // Product of even digits
    int prod = 1;
    bool foundEven = false; // To check if there are any even digits
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 == 0) {
            prod *= digit;
            foundEven = true;
        }
        temp /= 10;
    }
    if (foundEven) {
        cout << "Product of even digits: " << prod << endl;
    } else {
        cout << "No even digits found." << endl;
    }

    // First and last digit
    int first = -1, last = num % 10;
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        first = digit;
        temp /= 10;
    }
    cout << "First and last digit: " << first << " and " << last << endl;

    // Swap first and last digit
    int newNum = num;
    int numDigits = log10(num) + 1; // Number of digits
    int firstMultiplier = pow(10, numDigits - 1); // Multiplier for the first digit
    newNum = newNum - first * firstMultiplier - last + last * firstMultiplier + first;
    cout << "Number after swapping first and last digit: " << newNum << endl;

    // Palindrome
    rev = 0;
    temp = num; // Reset temp for palindrome check
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if (rev == num) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    // Frequency of first digit
    int freq = 0;
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        if (digit == first) {
            freq++;
        }
        temp /= 10;
    }
    cout << "Frequency of first digit (" << first << "): " << freq << endl;

    // Armstrong number
    int armstrongSum = 0;
    numDigits = log10(num) + 1; // Number of digits
    temp = num; // Reset temp for Armstrong check
    while (temp > 0) {
        digit = temp % 10;
        armstrongSum += pow(digit, numDigits);
        temp /= 10;
    }
    if (armstrongSum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    // Strong number
    int strongSum = 0;
    temp = num; // Reset temp for Strong number check
    while (temp > 0) {
        digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        strongSum += factorial;
        temp /= 10;
    }
    if (strongSum == num) {
        cout << num << " is a Strong number." << endl;
    } else {
        cout << num << " is not a Strong number." << endl;
    }

    // Perfect number
    int perfectSum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            perfectSum += i;
        }
    }
    if (perfectSum == num) {
        cout << num << " is a Perfect number." << endl;
    } else {
        cout << num << " is not a Perfect number." << endl;
    }

    return 0; 
}
