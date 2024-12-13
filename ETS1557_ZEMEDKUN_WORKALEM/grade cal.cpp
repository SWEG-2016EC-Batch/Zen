#include <iostream>
using namespace std;

int main() {
    int n = 6; // Fixed size of the pyramid

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }
 
        for (int col = 1; col <= row; col++) {
            if (col == 1 || col == row || row == n) { 
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}
