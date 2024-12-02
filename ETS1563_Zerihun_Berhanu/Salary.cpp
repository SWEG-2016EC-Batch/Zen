#include <iostream>
using namespace std;
int main () {
float baseSalary, weeklyWorkingHour, bonusRate, netSalary, bonus, pension,tax, income;
string name;
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter your base salary (br)"<<endl;
cin>>baseSalary;
cout<<"Enter your weekly working hour(hr)"<<endl;
cin>>weeklyWorkingHour;
again:
cout<<"Enter bonus rate (0-1)"<<endl;
cin>>bonusRate;
if ((0 > bonusRate || bonusRate > 1) || cin.fail()){
    cin.clear ();
    cin.ignore ();
    cout<<"Invalid bonus rate, insert again"<<endl;
    goto again;

}
else {
   bonus = weeklyWorkingHour*bonusRate;
cout<<"Bonus is calculated as a multiple of weekly working hour and bonus rate."<<endl;
cout<<"Your bonus is: "<<bonus<<"br."<<endl;
pension = baseSalary*0.05;
//Pension is calculated as 5% of base salary.
income = baseSalary + bonus;
cout<<"Income (gross income) is calculated as base salary + bonus."<<endl;
cout<<"Your gross income is: "<<income<<"br. "<<endl;
tax = income * 0.15;
//Tax is calculated as 15% of your income.
netSalary = baseSalary - 0.05*(baseSalary)-0.15*(income) + bonus;
cout<<"Net salary is calculated as base salary - 5% of base salary (pension) - 15% of income (tax) + bonus."<<endl;
cout<< "Your net salary is "<<netSalary << "br."<<endl;
}

return 0;
}
