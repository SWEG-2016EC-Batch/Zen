#include <iostream>
using namespace std;

// Function to determine the letter grade based on the total mark
char determineGrade(double totalMark) {
    if (totalMark >= 90) return 'A+';
    else if (totalMark >= 80) return 'A';
    else if (totalMark >= 75) return 'B+';
    else if (totalMark >= 60) return 'B';
    else if (totalMark >= 45) return 'C';
    else if (totalMark >= 30) return 'D';
    else return 'F';
}

int main() {
    // Input variables
    double testMark, quizMark, projectMark, assignmentMark, finalExamMark;
    double totalMark;

    // Input for each assessment mark
    cout << "Enter Test Mark (out of 100): ";
    cin >> testMark;
    cout << "Enter Quiz Mark (out of 100): ";
    cin >> quizMark;
    cout << "Enter Project Mark (out of 100): ";
    cin >> projectMark;
    cout << "Enter Assignment Mark (out of 100): ";
    cin >> assignmentMark;
    cout << "Enter Final Exam Mark (out of 100): ";
    cin >> finalExamMark;

    // Calculate total mark
    totalMark = (testMark * 0.15) + (quizMark * 0.05) + (projectMark * 0.20) 
                + (assignmentMark * 0.10) + (finalExamMark * 0.50);

    // Determine the letter grade
    char grade = determineGrade(totalMark);

    // Display the results
    cout << "\n--- Assessment Result ---" << endl;
    cout << "Total Mark: " << totalMark << " / 100" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
