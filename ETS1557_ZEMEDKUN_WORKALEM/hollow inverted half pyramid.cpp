#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = n; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            // Print stars only on the first row or at the borders
            if (col == 1 || col == row || row == n) {
                cout << "*";
            } else {
                cout << " "; // Print space for hollow effect
            }
        }
        cout << endl;
    }

    return 0;
}
