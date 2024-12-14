// question number 1 working on the salary of an employee

#include <iostream>
using namespace std;

// calculatin the net salary of an employee

int main ()
{

    double baseSalary, bonusRate = 0, bonus = 0, grossSalary, pension, tax = 0, taxRate, netSalary;
    int workingHour, extraWorHour; // declaration and intialization


            cout << "CALCULATING THE NET SALAY " << endl;

            cout << "Enter the employees base salary (br): "; // prompt the user to enter the base salary
            cin >> baseSalary;

            cout << "Enter the working hour (hr): "; // prompt the user to enter the working hour
            cin >> workingHour;



    if ( workingHour > 40) // checking if the working hour is greater than 40 hr or not
    {
      // prompt the user to enter the bonus rate
        cout << "Enter the bonus rate: ";
        cin >> bonusRate;

        extraWorHour = (workingHour - 40);
        bonus = (extraWorHour) * bonusRate;
    
    }


// finding the gross salary form base salary and bonus
    grossSalary = baseSalary + bonus; 
  // calculatint the pention from the base salary
    pension = baseSalary * 0.07;

  // checking the range of the gross salary to find the tax rate
                if ( grossSalary < 200)
                {
                    taxRate = 0;
                }
                else if( grossSalary >= 200 || grossSalary < 600)
                {
                    taxRate = 0.1;
                }
                else if( grossSalary >= 600 || grossSalary < 1200)
                {
                    taxRate = 0.15;
                }
                else if( grossSalary >= 1200 || grossSalary < 2000)
                {
                    taxRate = 0.2;
                }
                else if( grossSalary >= 2000 || grossSalary < 3500)
                {
                    taxRate = 0.25;
                }
                else 
                {
                    taxRate = 0.3;
                }


    tax = grossSalary * taxRate; // calculatint the tax
    netSalary = ( grossSalary - pension - tax);// calculatint the net salary

  // displaying the result 

    cout << "The extra working hour is: " << extraWorHour << "hr" << endl;
    cout << "The bonus is: " << bonus << "br" << endl;
    cout << "The gross salary is: " << grossSalary << "br" << endl;
    cout << "The pension is: " << pension << "br" << endl;
    cout << "The tax is: " << tax << "br" << endl;
    cout << "The net salary is: " << netSalary << "br" << endl;


    return 0;
}




// question number 2

#include <iostream>
using namespace std;
// calculating the grade of a student

int main () {
    // declarint the variables

    float test, quiz, project, assignment, finalExam, totalResult;

cout << "Calcualting the mark and grade." << endl;

            cout << "Enter the test result: ";// prompt the user to enter the test result
            cin >> test;
            if ( test >= 0 && test <= 15) // check if the reslut is in the range
            {
                cout << test << endl;
            }
            else 
            {
                cout << "Your input is not in the range of the test.";
                return 0;
            }
                
            cout << "Enter the quiz result: "; // prompt the user to enter hter quiz result
            cin >> quiz ;
            if ( quiz >=0 && quiz <= 5) // check if the quiz is in the range
            {
                    cout << quiz << endl;
            }
            else
            {
                cout << "Your quiz result is not on the range.";
                return 0;
            }

            cout << "Enter the project result: "; // prompt the user to enter the project result
            cin >> project;
            if ( project >= 0 && project <= 20 ) // check if the project result is on the range
            {
                cout << project << endl;
            }
            else
            {
                cout << "Your project result is not on the range.";
                return 0;
            }

            cout << "Enter the assignment result: "; // prompt the user to enter the assignment result
            cin >> assignment ;
            if ( assignment >= 0 && assignment <=10 ) // check if the assignment result is in range
            {
                cout << assignment << endl;
            
            }
            else 
            {
                cout << "Your assignment result is not on the range.";
                return 0;
            }

            cout << "Enter the final exam result: "; // prompt the user to enter the final exam result
            cin >> finalExam ;
            if ( finalExam >= 0 && finalExam <= 50) // check if it's in the range
            {
                cout << finalExam << endl;

            }
            else
            {
                cout << "Your final exam result is not on the range.";
                return 0;
            }

            totalResult = test + quiz + project + assignment + finalExam;// calculatint the total result
            cout << "Your total result is: " << totalResult << endl;

            char grade; // declarint a character variable grade

            // checking the the total result to its correspoing grade letter and print its grade

            if ( totalResult >= 90)
            {   
                grade = 'A+';
                cout << "Your grade is: " << grade << endl;
            }
            else if ( totalResult >= 80)
            {   
                grade = 'A';
                cout << "Your grade is: " << grade << endl;
            }
            else if ( totalResult >= 75)
            {   
                grade = 'B+';
                cout << "Your grade is: " << grade << endl;
            }
            else if ( totalResult >= 60)
            {   
                grade = 'B';
                cout << "Your grade is: " << grade << endl;
            }
            else if ( totalResult >= 55)
            {   
                grade = 'C+';
                cout << "Your grade is: " << grade << endl;
            }
            else if ( totalResult >= 45)
            {   
                grade = 'D';
                cout << "Your grade is: " << grade << endl;
            }
            else 
            {   
                grade = 'F';
                cout << "Your grade is: " << grade << endl;
            }
            



return 0;
}


// questiont number 3


//  A 
// finding the reverse of the given number

#include <iostream>
using namespace std;



int main ()
{
        int num, reversenum = 0; // declare and intialize the variables

        cout << "Enter the number: "; // prompt the user to input the number
        cin >> num;
        if ( num % 10 == 0)
        {
            cout << "The given number hasn't a reversed form.";
        }

        else
        {

        while ( num != 0) // checking the number is not zero
        {
            int digit = num % 10; // finding the remender after diving by 10

            reversenum = reversenum * 10 + digit; // updating the reverse number
            num /= 10;

        }
        cout << "The reversed number is: " << reversenum; // print the resersed number
        }

        

    return 0;
}



//  B 
//couting the number of digits of a number


#include <iostream>
using namespace std;

int main ()
{
    int num, count = 0; // declaretion and intialization
    cout << "Enter a number: "; // prompt the user to enter a number
    cin >> num;

    if ( num == 0) // check the number is zero because we can have infinte zeros
    {
        cout << "Unknow digist number.";
    }
    else 
    {
        if ( num < 0) // considering negative numbers
        { num = -num;}
        do
        {
            num /= 10;
            count++; // counting how many time we make the division
        } while (num != 0); // checking condition num = 0, means we finishe the digit of the number

        
    }
    cout << "The digit of a given number is: " << count; // printing the digit

    return 0;
}


// C

// finding the even digig of a number and then its product

#include <iostream>
using namespace std;

int main ()
{
    int num, product = 1; // declaration and intialization
    bool hasEven = false;

    cout << "Enter a number: "; // prompt the user to input a number
    cin >> num;

    if ( num < 0) // checking negative numbrs
    {
        num = -num;
    }
    while ( num != 0)
    {
        int digit = num % 10; // couting a digit
        // checking if the digit is even
        if ( digit % 2 == 0 && digit != 0){
            product *= digit;
            hasEven = true;
            cout << digit << ", " ;
        }
        num /= 10;
        
    }
    cout << endl;
    if ( hasEven) {
        // performig a product on the even digit

        cout << "Product of the even digit: " << product << endl;
    } else {
        cout << "No even digit found!";
    }

    return 0;
}


// D

// printing the first and the last digit of 
// a number and compute ther sum

# include <iostream>
using namespace std;

int main ()
{
    int num, firstDigit, lastDigit, sum = 0; // declaration
    cout << "Enter a number: ";
    cin >> num;
    
    lastDigit = num % 10;

    if ( num < 0){
        num = -num; // consdering negative numbers
    }
    while ( num >= 10){
        num /= 10; // finding the first digit
    }
    firstDigit = num;

    sum = firstDigit + lastDigit; // calculatint the sum

    // displaying the first and the last digit

    cout << "The firt and last digits are: " << firstDigit << " and " << lastDigit << endl;

    // displaying the resultS
    cout << "The sum of the first and the last digit of the number is: " << sum;



    return 0;

} 



// E
// swappint the first and last digit of a given number

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{


    int num, firstDigit, lastDigit, numDigits, divisor, swappedNum;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10; // Get the last digit

    numDigits = log10(num); // Get the number of digits - 1
    divisor = pow(10, numDigits); // Calculate the divisor 

    firstDigit = num / divisor; // Get the first digit

    // Remove the first and last digits from the original number
    int remainingNum = (num % divisor) / 10;

    // Form the new number with swapped digits
    swappedNum = lastDigit * divisor + remainingNum * 10 + firstDigit;

    cout << "Number after swapping first and last digits: " << swappedNum << endl;

    


    return 0;
}


// F
// checking if the given number is palindrome or not

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
        cout << "The given number is: " << originalNum << endl;
    // Check if the original number and the reversed number are the same
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}


// G
// finding the frequency of a number


#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int frequency[10] = {0}; // Array to store the frequency of digits 0-9

    cout << "Enter an integer: ";
    cin >> num;

    // Make a copy of the number
    int temp = num;

    // Calculate the frequency of each digit
    while (temp != 0) {
        digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

    // Print the results in a table format
    cout << "Digit Frequency" << endl;
    cout << "----- ---------" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "  " << i << "      " << frequency[i] << endl;
    }

    return 0;
}


// H
// cheking if the number is strong number

#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Calculate the sum of the factorial of each digit
    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if the sum of factorials equals the original number
    if (sum == originalNum) {
        cout << originalNum << " is a strong number." << endl;
    } else {
        cout << originalNum << " is not a strong number." << endl;
    }

    return 0;
}


// I
// checking wether a number is perfect number or not

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}




// PRINTING PATTERN

// TO PRINT THE GIVEN ORDER IN THE WORK SHEET YOU HAVE TO ENTER
// THE ROWS AND COLOMUNS BY COUNTING FORM THE PICTURE GIVEN

// A
// print the 



#include <iostream>
using namespace std;

int main ()
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;


    for ( int i = 1; i <= row; i++)
    {
        for ( int j = 1; j <= col; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}






// B 

// printing the alphabets in a rectangular form

#include <iostream>
using namespace std;

int main ()
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;

    char alphabet = 'A';
    for ( int i = 1; i <= row; i++)
    {
        

        for ( int j = 1; j <= col; j++)
        {
            cout << alphabet << " ";
            alphabet++;
        }
        cout << endl;
    }

    return 0;
}







// C

// printing a half pramid with a number

# include <iostream>

using namespace std;

int main ()

{

    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;


            for ( int i = 1; i <= row; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }



    return 0;
}








// D

// printing the half pramid from the left

# include <iostream>

using namespace std;

int main ()
{

    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;



            for ( int i = 1; i <= row; i++)
        {
            for ( int k = row - i; k > 0; k--)
            {
                cout << "  ";
            }
            for ( int j = i; j > 0; j--)
            {
                cout <<  j << " " ;
                
            }
            cout << endl;
        }

    return 0;

}




// E

// printing a half pramid in alphabetic order


# include <iostream>

using namespace std;

int main ()

{

    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;


            for ( int i = 1; i <= row; i++)
    {
            char alphabet = 'A';

        for ( int j = 1; j <= i; j++)
        {
            cout << alphabet << " ";
            alphabet++;
        }
        cout << endl;
    }



    return 0;
}








// F
// 


# include <iostream>

using namespace std;

int main ()

{

    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;

            
    for ( int i = 1; i <= row; i++)
    {
        char alphabet = 'a';

        for ( int j = 1; j <= col; j++)
        {
            cout << alphabet << " ";
            alphabet++;
        }
        cout << endl;
    }

    

        return 0;
}







// G
// printing a hollow rectangle

# include <iostream>

using namespace std;

int main () 
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;


            for ( int i = 1; i <= row; i++)
            {
                for ( int j = 1; j <= col; j++)
                {
                if ( i == 1 || i == row || j == 1 || j == col)
                {
                   
                    cout << "* " ;
                    
                }
                else
                {
                    cout << "  ";
                }
                } 
                cout << endl;
            
            }


    return 0;
}






// H
// printing a half pramid that is inverted

# include <iostream>

using namespace std;

int main () 
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;

           for ( int i = row; i > 0; i--)
           {
            for ( int j = i; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
           }



    return 0;
}




// I

// printing a hallow half pramid



# include <iostream>

using namespace std;

int main () 
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;

            
            for ( int i = row; i > 0; i--)
            {
                for ( int j = i; j > 0; j--)
                {
                    if ( j == 1 || j == i || i == row)
                    { 
                        cout << "* ";
                    }
                    else 
                    {
                        cout << "  ";
                    }
                }
                cout << endl;
            }


            return 0;
}






// J

// printing a full pramid 


# include <iostream>

using namespace std;

int main () 
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;


        
        for ( int i = row; i > 0; i--)
            {
                for ( int k = row - i; k > 0; k--)
                {
                    cout << " ";
                }
                for ( int j = i; j > 0; j--)
                {
                    cout << "* ";
                }
                cout << endl;
            }



            return 0;
}
 

 





// K

// printing a full inverted pramid

# include <iostream>

using namespace std;

int main () 
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;


            for ( int i = row; i > 0; i--)
            {
                for ( int k = 1; k <= row - i; k++ )
            {
                cout << " ";
            }
            for ( int j = i; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
            }



            return 0;
}

// L

// printing a full hallow pramid

# include <iostream>

using namespace std;

int main () 
{
    int row, col;

            cout << "Enter the row contorl value: ";
            cin >> row;
            cout << "Enter the printing control value: ";
            cin >> col;

for ( int i = 1; i <= row; i++)
           {
            for ( int k = 1; k <= row - i; k++)
            {
                cout << "  ";
            }
            for ( int j = 1; j <= (2*i - 1); j++)
            {
                if ( i == row || j == 1 || j == (2*i  - 1))
                { cout << "* "; }
                else { cout << "  "; }
            }
            cout << endl;
            }



            return 0;
}














