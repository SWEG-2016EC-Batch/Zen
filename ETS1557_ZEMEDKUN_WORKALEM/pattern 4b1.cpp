#include <iostream>
using namespace std;

int main() {
    int n;

    for (int row = 1; row <= 5; row++) {
        for (int k = 5 - row; k >= 0; k--) {
            cout << " ";
        }
        for (int col = 1; col <= row; col++) {
            cout << char('1' + col - 1);
        }
        cout << endl;
    }

    return 0;
}
