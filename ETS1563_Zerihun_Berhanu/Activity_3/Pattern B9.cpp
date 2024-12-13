#include <iostream>
using namespace std;
int main (){
int row;
cout<<"Enter row: ";
cin>>row;
for (int i = 0; i < row; i++) {
for (int j = 0; j < row - 1; j++)
cout << " ";
for (int j = 0; j <= 1; j++)
if (i == 0 || i == row || j == 0 || j == i)
cout << "* ";
else
cout << "  ";
cout <<endl;
}

return 0;
}
