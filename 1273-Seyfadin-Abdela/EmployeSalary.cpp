#include <iostream>
#include <iomanip> // For output formatting
#include <string>  // For handling employee name

using namespace std;

int main() {
    cout << "Employee Salary Calculator\n";
    cout << "---------------------------\n";

    // Declare variables
    string name;
    double weeklyHours, bonusRate, baseSalary;
    double bonusPayment, grossSalary, pensionDeduction, taxDeduction, netSalary;

    // Input employee details
    cout << "Enter employee name: ";
    cin.ignore(); // Clear any previous input buffer
    getline(cin, name);

    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Calculations
    bonusPayment = weeklyHours * bonusRate;
    grossSalary = baseSalary + bonusPayment;
    pensionDeduction = grossSalary * 0.05;
    taxDeduction = grossSalary * 0.15;
    netSalary = grossSalary - (pensionDeduction + taxDeduction);

    // Output results
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "\nEmployee Name: " << name << "\n";
    cout << "Weekly Working Hours: " << weeklyHours << "\n";
    cout << "Base Salary: $" << baseSalary << "\n";
    cout << "Bonus Payment: $" << bonusPayment << "\n";
    cout << "Gross Salary: $" << grossSalary << "\n";
    cout << "Pension Deduction: $" << pensionDeduction << "\n";
    cout << "Tax Deduction: $" << taxDeduction << "\n";
    cout << "Net Salary: $" << netSalary << "\n";

    return 0;
}
