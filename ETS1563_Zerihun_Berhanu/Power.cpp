#include <iostream>
#include <cmath>
using namespace std;
int main (){
double x, y, store;
again:
if (cin.fail ()){
    cin.clear();
    cin.ignore();
    cout<<"Invalid Input"<<endl;
    goto again;
}
else {
   cout<<"Enter x ";
cin>>x;
cout<<"Enter y ";
cin>>y;
   store = pow(x, y);
    cout<<"The result of "<<x<<" raise to "<<y<<" is "<<store<<"."<<endl;
    }
return 0;
}

