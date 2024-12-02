#include <iostream>
using namespace std;
int main(){
float baseSalary, workingHour, bonusRate, netSalary, bonus, pension, tax;
label:
cout<<"Enter the base salary (br) "<<endl;
cin>>baseSalary;
 if (cin.fail())
 {
     cout<<"Please enter a number"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
 goto label;
 }

 else if (baseSalary<=0)
 {
     cout<<"Please enter a number greater than 0"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
goto label;
 }

 line:
cout<<"Enter the working hour per week (hr) "<<endl;
cin>>workingHour;
 if (cin.fail())
 {
     cout<<"Please enter a number"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
 goto line;
 }

 else if (workingHour<0)
 {
     cout<<"Please enter a number greater than 0"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
goto label;
 }
mark:
cout<<"Enter bonus rate (0-1) "<<endl;
cin>>bonusRate;
 if (cin.fail())
 {
     cout<<"Please enter a number"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
 goto mark;
 }

 else if (bonusRate<0 || bonusRate>1)
 {
     cout<<"Please enter a number greater than 0 and less than 1"<<endl;
     cin.clear();
     cin.ignore(10 , '\n');
goto mark;
}

bonus= 4*(workingHour*bonusRate);//taking a month on average of 4 weeks
cout<<"Your bonus is: "<<bonus<<"br."<<endl;
pension=baseSalary*0.05;
cout<<"Your pension is: "<<pension<<"br."<<endl;
tax = 0.15 * (baseSalary + bonus);
cout<<"Your tax is: " <<tax<<"br."<<endl;
netSalary = 0.8*baseSalary + 0.85*bonus;
cout<<"Your gross salary is " << (bonus + baseSalary) <<endl;
cout<< "Your net salary is [base salary + bonus - 5% (base salary) - 15% (base salary + bonus) ] "<<"="<<netSalary << "br."<<endl;


return 0;
}
