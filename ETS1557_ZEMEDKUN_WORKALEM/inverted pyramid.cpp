#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = n; row >= 1; row--) {
        // Print leading spaces
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
        // Print stars
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
