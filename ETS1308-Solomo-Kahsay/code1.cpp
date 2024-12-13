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
