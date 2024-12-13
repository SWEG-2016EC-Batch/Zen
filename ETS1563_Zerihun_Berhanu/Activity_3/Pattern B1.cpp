#include <iostream>
using namespace std;
int main (){
int row;
cout<<"Enter row: ";
cin>>row;
for (int i = 1; i <= row; i++){
for (int k = 1; k <= row-i; k++){
cout<<"  ";
}
for (int j = i; 0 < j; j--){
cout<<j<<" ";
}
cout<<endl;
}
return 0;
}
