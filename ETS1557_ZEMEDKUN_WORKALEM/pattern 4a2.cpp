#include <iostream>
using namespace std;

int main() {
    int n ; 
    char letter = 'A'; // Starting letter

    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 6; col++) {
            cout << letter;
            letter++;
        }
        cout << endl;
    }

    return 0;
}
