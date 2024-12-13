#include <iostream>
using namespace std;
int main (){
int row;
cout<<"Enter row: ";
cin>>row;
for (int i = 1; i <= row; i++) {

        for (int k = 1; k <= row - i; k++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

return 0;
}
