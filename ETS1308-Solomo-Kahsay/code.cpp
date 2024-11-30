// 1 write a program that calculate the bmi 

#include <iostream>
#include <limits>
using namespace std;

// Function to validate numeric input
bool isValidInput() {
    if(cin.fail()) {
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        return false;
    }
    return true;
}

int main() {
    int size;
    float height, weight, BMI;

    // Loop until a valid size is entered
    do {
        cout << "Enter the number of persons you want to find their BMI: " << endl;
        cin >> size;

        if (!isValidInput() || size <= 0) {
            cout << "Invalid input, please enter a positive integer." << endl;
        }
    } while (size <= 0);

    cout << "You are allowed to calculate the BMI of " << size << " persons." << endl;

    for (int i = 1; i <= size; i++) {
        cout << "Enter the person's weight (kg) and height (m): " << endl;
        cin >> weight >> height;

        if (!isValidInput() || weight <= 0 || height <= 0) {
            cout << "Invalid input, weight and height must be positive numbers." << endl;
            i--; // retry current iteration
            continue;
        }

        BMI = weight / (height * height);
        cout << "The BMI of person " << i << " is " << BMI << endl;

        if (BMI >= 18.5 && BMI <= 24.9) {
            cout << "The person's weight is normal." << endl;
        } else if (BMI < 18.5) {
            cout << "The person is underweight." << endl;
        } else {
            cout << "The person is overweight." << endl;
        }
    }

    return 0;
}



// 2 calculate the distance travelle
#include <iostream>
#include <limits>
using namespace std;

bool isValidInput(){
    if(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}
int main() {

float capacity, milesPerGallon, distance;

do{
    cout << "Enter the capacity of the fuel tank (in gallons): " << endl;
    cin >> capacity;
    if (!isValidInput() || capacity <= 0){
        cout << "Invalid input, please enter a positive number." << endl;

    } 
} while (!isValidInput() || capacity <= 0);

do{
    cout << "Enter the miles per gallon the automobile can driven: ";
    cin >> milesPerGallon;
    
    if(!isValidInput() || milesPerGallon <= 0){
  cout << "Invalid input, please enter a positive number." << endl;

    }
 } while (!isValidInput() || milesPerGallon <= 0);

 distance = capacity * milesPerGallon;
 cout << "The automobile can be driven " << distance << " miles without refueling." << endl;

 return 0;

}



// 3 the power of given number


#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function to validate numeric input
bool isValidInput() {
    if(cin.fail()) {
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        return false;
    }
    return true;
}

int main() {
    double x, y, result;

    // Prompt user for the value of x
    do {
        cout << "Enter the value of x: ";
        cin >> x;
        if (!isValidInput()) {
            cout << "Invalid input, please enter a number." << endl;
        }
    } while (!isValidInput());

    // Prompt user for the value of y
    do {
        cout << "Enter the value of y: ";
        cin >> y;
        if (!isValidInput()) {
            cout << "Invalid input, please enter a number." << endl;
        }
    } while (!isValidInput());

    // Calculate the result of x^y
    result = pow(x, y);

    // Output the result
    cout << x << " raised to the power of " << y << " is " << result << endl;

    return 0;
}


// 4 calculate a salary fo an employee
#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Function to validate numeric input
bool isValidInput() {
    if(cin.fail()) {
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        return false;
    }
    return true;
}

int main() {
    string employeeName;
    float weeklyWorkingHours, bonusRatePerHour, baseSalary;
    float bonusPayment, grossSalary, pension, tax, netSalary;

    // Input employee name
    cout << "Enter employee name: ";
    getline(cin, employeeName);
    
    // Input and validate weekly working hours
    do {
        cout << "Enter weekly working hours: ";
        cin >> weeklyWorkingHours;
        if (!isValidInput() || weeklyWorkingHours <= 0) {
            cout << "Invalid input, please enter a positive number." << endl;
        }
    } while (!isValidInput() || weeklyWorkingHours <= 0);

    // Input and validate bonus rate per hour
    do {
        cout << "Enter bonus rate per hour: ";
        cin >> bonusRatePerHour;
        if (!isValidInput() || bonusRatePerHour <= 0) {
            cout << "Invalid input, please enter a positive number." << endl;
        }
    } while (!isValidInput() || bonusRatePerHour <= 0);

    // Input and validate base salary
    do {
        cout << "Enter base salary: ";
        cin >> baseSalary;
        if (!isValidInput() || baseSalary <= 0) {
            cout << "Invalid input, please enter a positive number." << endl;
        }
    } while (!isValidInput() || baseSalary <= 0);

    // Process
    bonusPayment = weeklyWorkingHours * bonusRatePerHour;
    grossSalary = baseSalary + bonusPayment;
    pension = 0.05 * grossSalary;
    tax = 0.15 * grossSalary;
    netSalary = grossSalary - pension - tax;

    // Output
    cout << "Employee Name: " << employeeName << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension: $" << pension << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}


//5  caluculate time taken 

#include <iostream>
using namespace std;

int main() {
    const int transmissionRate = 960; // characters per second
    const long long fileSize = 419430400; // file size in bytes (400MB)
    
    // Calculate transmission time in seconds
    long long timeInSeconds = fileSize / transmissionRate;
    
    // Convert time to minutes, hours, and days
    long long timeInMinutes = timeInSeconds / 60;
    long long timeInHours = timeInMinutes / 60;
    long long timeInDays = timeInHours / 24;
    
    // Display the results
    cout << "Transmission Time:" << endl;
    cout << timeInSeconds << " seconds" << endl;
    cout << timeInMinutes << " minutes" << endl;
    cout << timeInHours << " hours" << endl;
    cout << timeInDays << " days" << endl;

    return 0;
}



 
