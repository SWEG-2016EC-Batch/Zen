#include <iostream>
#include <iomanip> // For output formatting

using namespace std;

// Function to calculate the maximum distance the automobile can drive
double calculateDistance(double capacity, double mpg) {
    return capacity * mpg;
}

int main() {
    cout << "Automobile Range Calculator\n";
    cout << "----------------------------\n";

    double tankCapacity, milesPerGallon;

    // Input fuel tank capacity in gallons
    cout << "Enter the capacity of the fuel tank (in gallons): ";
    cin >> tankCapacity;

    // Input fuel efficiency in miles per gallon
    cout << "Enter the fuel efficiency (miles per gallon): ";
    cin >> milesPerGallon;

    // Validate inputs
    if (tankCapacity <= 0 || milesPerGallon <= 0) {
        cout << "Error: Both capacity and fuel efficiency must be positive values.\n";
        return 1;
    }

    // Calculate the maximum distance
    double maxDistance = calculateDistance(tankCapacity, milesPerGallon);

    // Output the result
    cout << fixed << setprecision(2); // Format the output to 2 decimal places
    cout << "\nThe automobile can drive approximately " << maxDistance 
         << " miles without refueling.\n";

    return 0;
}
