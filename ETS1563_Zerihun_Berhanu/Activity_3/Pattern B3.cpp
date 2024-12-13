#include <iostream>
using namespace std;
int main (){
int row;
cout<<"Enter row: ";
cin>>row;
for (int i = 1; i <= row; i++){
char alpha = 'a';
for (int j = 1; j <= row; j++){
cout<<alpha<<" ";
alpha++;
}
cout<<endl;
}
return 0;
}
