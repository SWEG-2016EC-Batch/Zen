
#include <iostream>
#include <limits>
#include <string>
#include <algorithm> // Include this for min and max functions
using namespace std;

int main() {
    string employee_Name;
    float weekly_Hours, bonus_Rate, base_Salary, overtime_Rate = 0;
    float bonus_Payment, gross_Salary, net_Salary;
    float pension, tax;
    char choose;

    do {
        cout << "Enter employee name: ";
        getline(cin, employee_Name);

        cout << "Enter weekly working hours: ";
        while (!(cin >> weekly_Hours) || weekly_Hours < 0) { 
            cout << "Invalid input, please enter a positive number for hours: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }

        cout << "Enter bonus rate per hour: ";
        while (!(cin >> bonus_Rate) || bonus_Rate < 0) {
            cout << "Invalid input, please enter a positive number for bonus rate: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter base salary: ";
        while (!(cin >> base_Salary) || base_Salary < 0) { 
            cout << "Invalid input, please enter a positive number for base salary: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (weekly_Hours > 40) {
            cout << "Enter over-time bonus rate per hour: ";
            while (!(cin >> overtime_Rate) || overtime_Rate < 0) {
                cout << "Invalid input, please enter a positive number for over-time bonus rate: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }

        float regular_Hours = min(weekly_Hours, 40.0f);
        float overtime_Hours = max(0.0f, weekly_Hours - 40.0f);

        bonus_Payment = (regular_Hours * (bonus_Rate * base_Salary)) + (overtime_Hours * (overtime_Rate * base_Salary));
        gross_Salary = base_Salary + bonus_Payment;
        pension = 0.07 * base_Salary;

        if (gross_Salary <= 200) {
            tax = 0;
        } else if (gross_Salary <= 600) {
            tax = 0.10 * (gross_Salary - 200);
        } else if (gross_Salary <= 1200) {
            tax = 0.10 * 400 + 0.15 * (gross_Salary - 600);
        } else if (gross_Salary <= 2000) {
            tax = 0.10 * 400 + 0.15 * 600 + 0.20 * (gross_Salary - 1200);
        } else if (gross_Salary <= 3500) {
            tax = 0.10 * 400 + 0.15 * 600 + 0.20 * 800 + 0.25 * (gross_Salary - 2000);
        } else {
            tax = 0.10 * 400 + 0.15 * 600 + 0.20 * 800 + 0.25 * 1500 + 0.30 * (gross_Salary - 3500);
        }

        net_Salary = gross_Salary - (pension + tax);

        cout << "Employee Name: " << employee_Name << endl;
        cout << "Bonus Payment: " << bonus_Payment << " ETB" << endl;
        cout << "Pension: " << pension << " ETB" << endl;
        cout << "Gross Salary: " << gross_Salary << " ETB" << endl;
        cout << "Tax: " << tax << " ETB" << endl;
        cout << "Net Salary: " << net_Salary << " ETB" << endl;

        cout << "Do you want to calculate again? (y/n): ";
        cin >> choose;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    } while (choose == 'y' || choose == 'Y');

    return 0;
}
