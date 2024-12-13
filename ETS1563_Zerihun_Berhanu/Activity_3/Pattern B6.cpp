#include <iostream>
using namespace std;
int main (){
int row;
cout<<"Enter row: ";
cin>>row;
  for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
             if (j == 1 || j == i || i == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
    cout<<endl;
}


return 0;
}
