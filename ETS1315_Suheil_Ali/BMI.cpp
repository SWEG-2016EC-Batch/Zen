#include <iostream>
using namespace std;
int main()
{
 float BMI,weight,height,stop;
 do
 {
 label://placed to return if the input failed
 cout<<"enter your height in meter: ";
 cin>>height;
 if (cin.fail())
 {
     cout<<"Please enter a number"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
 goto label;
 }

 else if (height<=0)
 {
     cout<<"Please enter a number greater than 0"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
goto label;
 }

else
 mark: // placed to return if the input failed
 cout<<"enter your weight in KG: ";
 cin>>weight;
 if (cin.fail())
 {
     cout<<"Please enter a number"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
     goto mark;
 }

 else if(weight<=0)
 {
     cout<<"Please enter a number greater than 0"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
      goto mark;
 }

 BMI = weight/(height*height);
 cout<<"Your body mass index is: "<<BMI<<endl;

 if(BMI>=19 && BMI<=25)
 {
     cout<<"You are normal weight"<<endl;
 }
 else if(BMI<19)
 {
    cout<<"You are under weight"<<endl;
 }
 else
 {
     cout<<"You are over weight"<<endl;
 }
   cout<<"Enter any number to continue and zero to exit: ";
   cin>>stop;
 } while (stop!=0);//stop statement
return 0;
}
