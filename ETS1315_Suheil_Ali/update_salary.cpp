#include<iostream>
using namespace std;
int main()
{
    float net_pay , pension , basic_salary , worked_hour , bonus_rate , overtime_bonusrate , bonus, overtime_workedhour , gross_salary , tax ;
    cout<<"Please enter your basic salary: ";
    cin>>basic_salary;
    cout<<"Please enter the time you have worked: ";
    cin>>worked_hour;
    cout<<"Please enter your bonus rate(0-1): ";
    cin>>bonus_rate;
    if(worked_hour<=40)
    {
        bonus= worked_hour*bonus_rate ;
    }
    else
    {
        cout<<"Please enter your over time bonus rate(0-1): ";
        cin>>overtime_bonusrate;
        overtime_workedhour= worked_hour - 40 ;
        bonus = (worked_hour*bonus_rate) + (overtime_workedhour * overtime_bonusrate);
    }
    gross_salary = basic_salary + bonus ;


    if(basic_salary>=0 && basic_salary<=200)
    {
        cout<<"You are free from tax"<<endl;
        tax = 0;
    }
    else if (basic_salary>200 && basic_salary <= 600)
    {
        tax = gross_salary * 0.1 ;
    }
    else if (basic_salary> 600 && basic_salary <= 1200)
    {
        tax = gross_salary * 0.15 ;
    }
    else if(basic_salary>1200 && basic_salary <= 2000)
    {
        tax = gross_salary * 0.2 ;
    }
    else if(basic_salary>2000 && basic_salary <= 3500)
    {
        tax = gross_salary * 0.25 ;
    }
    else if(basic_salary>3500)
    {
        tax = gross_salary * 0.3 ;
    }
    pension= basic_salary*0.07;
   cout << "Your tax is: "<<tax<<" birr"<<endl;
   cout<<"Your pension is: "<<pension<<" birr"<<endl;
   cout<<"Your bonus is: "<<bonus<<" birr"<<endl;
   cout<<"Your total income with out deduction is: "<<gross_salary<<" Birr"<<endl;
   net_pay= (gross_salary - pension - tax);
    cout<<"Your net salary is: "<<net_pay<<" Birr"<<endl;

    return 0;
}
