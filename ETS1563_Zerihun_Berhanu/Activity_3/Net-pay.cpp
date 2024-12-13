#include <iostream>
using namespace std;
int main (){
double basicSalary,workedHour, bonusRate, OT_hours, gross_salary, pension, bonus, taxRate, tax, netSalary;
cout<<"Enter the salary (br): ";
cin>>basicSalary;
cout<<"Enter worked hour (hr): ";
cin>>workedHour;
if (workedHour > 40){
OT_hours = workedHour - 40;
cout<<"Enter overtime bonus rate/hour: ";
cin>>bonusRate;
bonus = OT_hours*bonusRate;
}
else {
    bonus = 0;
}
gross_salary = basicSalary + bonus;
if (gross_salary <= 200){
    taxRate = 0;
    tax = 0;
}
else if (gross_salary > 200 && gross_salary <= 600){
    taxRate = 0.1;
    tax = gross_salary*taxRate;
}
else if (gross_salary > 600 && gross_salary <= 1200){
    taxRate = 0.15;
    tax = gross_salary*taxRate;
}
else if (gross_salary > 1200 && gross_salary <= 2000){
    taxRate = 0.2;
    tax = gross_salary*taxRate;
}
else if (gross_salary > 2000 && gross_salary <= 3500){
    taxRate = 0.25;
    tax = gross_salary*taxRate;
}
else {
    taxRate = 0.3;
    tax = gross_salary*taxRate;
}
pension = basicSalary*0.07;
netSalary = gross_salary-pension-tax;
cout<<"Your net salary is: "<<netSalary<<"br.";

return 0;
}
