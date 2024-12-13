#include <iostream>
#include <limits> // For std::numeric_limits
using namespace std;

int main() {
    int stud_num;
    cout << "Enter student number: ";
    cin >> stud_num;

    for (int j = 1; j <= stud_num; j++) {
        float test, quiz, project, assignment, final_exam;
        float total_mark;
        string grade;

        cout << "Enter marks for student " << j << ":" << endl;

        cout << "Test (15%): ";
        while (!(cin >> test) || test < 0 || test > 15) {
            cout << "Invalid input. Please enter a valid mark (0-15): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Quiz (5%): ";
        while (!(cin >> quiz) || quiz < 0 || quiz > 5) {
            cout << "Invalid input. Please enter a valid mark (0-5): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Project (20%): ";
        while (!(cin >> project) || project < 0 || project > 20) {
            cout << "Invalid input. Please enter a valid mark (0-20): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Assignment (10%): ";
        while (!(cin >> assignment) || assignment < 0 || assignment > 10) {
            cout << "Invalid input. Please enter a valid mark (0-10): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Final Exam (50%): ";
        while (!(cin >> final_exam) || final_exam < 0 || final_exam > 50) {
            cout << "Invalid input. Please enter a valid mark (0-50): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        // Calculate total mark
        total_mark = test + quiz + project + assignment + final_exam;

        // Determine letter grade
        if (total_mark >= 90) {
            grade = "A+";
        } else if (total_mark >= 80) {
            grade = "A";
        } else if (total_mark >= 75) {
            grade = "B+";
        } else if (total_mark >= 60) {
            grade = "B";
        } else if (total_mark >= 55) {
            grade = "C+";
        } else if (total_mark >= 45) {
            grade = "C";
        } else if (total_mark >= 30) {
            grade = "D";
        } else {
            grade = "F";
        }

        cout << "Total mark for student " << j << ": " << total_mark << endl;
        cout << "Letter grade for student " << j << ": " << grade << endl;
    }

    return 0;
}
