
include <iostream>
using namespace std;

// Function to determine the tax rate based on the gross salary
double determineTaxRate(double grossSalary) {
    if (grossSalary <= 200) return 0.0;
    else if (grossSalary <= 600) return 0.1;
    else if (grossSalary <= 1200) return 0.15;
    else if (grossSalary <= 2000) return 0.2;
    else if (grossSalary <= 3500) return 0.25;
    else return 0.3;
}

int main() {
    // Input variables
    double basicSalary, workedHours, bonusRate, overtimeBonusRate = 0;
    double extraHours = 0, bonus = 0, grossSalary = 0, pension = 0, tax = 0, netSalary = 0;

    // Input for basic salary, worked hours, and bonus rate
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Worked Hours: ";
    cin >> workedHours;
    cout << "Enter Bonus Rate per Hour: ";
    cin >> bonusRate;

    // Check for overtime
    if (workedHours > 40) {
        cout << "Enter Overtime Bonus Rate per Hour: ";
        cin >> overtimeBonusRate;
        extraHours = workedHours - 40;
        bonus = extraHours * overtimeBonusRate;
    }

    // Calculate gross salary
    grossSalary = basicSalary + bonus;

    // Calculate pension (7% of basic salary)
    pension = basicSalary * 0.07;

    // Determine tax rate and calculate tax
    double taxRate = determineTaxRate(grossSalary);
    tax = grossSalary * taxRate;

    // Calculate net salary
    netSalary = grossSalary - pension - tax;

    // Display the results
    cout << "\n--- Salary Breakdown ---" << endl;
    cout << "Basic Salary: " << basicSalary << " Br" << endl;
    cout << "Bonus: " << bonus << " Br" << endl;
    cout << "Gross Salary: " << grossSalary << " Br" << endl;
    cout << "Pension (7%): " << pension << " Br" << endl;
    cout << "Tax (" << (taxRate * 100) << "%): " << tax << " Br" << endl;
    cout << "Net Salary: " << netSalary << " Br" << endl;

    return 0;
}
