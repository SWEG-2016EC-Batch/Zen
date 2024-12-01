#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  float x,y,result;
  label:
    cout<<"Please enter the base number: ";
    cin>>x;
    if(cin.fail())
    {
        cout<<"Please enter a number"<<endl;
        cin.clear();
        cin.ignore(10,'\n');
        goto label;
    }
        else
    {
        mark:
        cout<<"Please enter the power number: ";
        cin>>y;
        if(cin.fail())
        {
            cout<<"Please enter a number"<<endl;
            cin.clear();
            cin.ignore(10,'\n');
            goto mark;
        }
    }
    result=pow(x,y);
    cout<<"The result is: "<<result<<endl;
return 0;
}
