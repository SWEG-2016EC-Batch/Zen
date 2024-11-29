#include <iostream>
#include <cmath> // For the pow() function

using namespace std;

int main() {
    cout << "Exponentiation Calculator (x^y)\n";
    cout << "-------------------------------\n";

    double x, y;

    // Input base (x) and exponent (y)
    cout << "Enter the base value (x): ";
    cin >> x;
    cout << "Enter the exponent value (y): ";
    cin >> y;

    // Calculate the result of x^y
    double result = pow(x, y);

    // Display the result
    cout << "\nResult of " << x << "^" << y << " = " << result << "\n";

    return 0;
}
