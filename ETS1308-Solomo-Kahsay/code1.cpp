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
