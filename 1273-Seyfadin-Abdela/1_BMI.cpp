
#include <iostream>
#include <iomanip> // For controlling output formatting
#include <string>  // For handling user responses

using namespace std;

// Function to calculate BMI
double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

// Function to determine BMI category
string determineBMICategory(double bmi) {
    if (bmi < 18.5) return "Underweight";
    else if (bmi >= 18.5 && bmi < 24.9) return "Normal weight";
    else return "Overweight";
}

int main() {
    cout << "Body Mass Index (BMI) Calculator\n";
    cout << "--------------------------------\n";
    
    char continueProgram = 'Y';
    while (toupper(continueProgram) == 'Y') {
        double weight, height;

        // Input weight and height
        cout << "\nEnter weight in kilograms: ";
        cin >> weight;
        cout << "Enter height in meters: ";
        cin >> height;

        // Validate input
        if (weight <= 0 || height <= 0) {
            cout << "Error: Weight and height must be positive values.\n";
            continue;
        }

        // Calculate BMI and determine category
        double bmi = calculateBMI(weight, height);
        string category = determineBMICategory(bmi);

        // Display results
        cout << fixed << setprecision(2); // Format output to 2 decimal places
        cout << "\nBMI: " << bmi << "\n";
        cout << "Category: " << category << "\n";

        // Ask user if they want to continue
        cout << "\nDo you want to calculate BMI for another person? (Y/N): ";
        cin >> continueProgram;
    }

    cout << "\nThank you for using the BMI Calculator!\n";
    return 0;
}
