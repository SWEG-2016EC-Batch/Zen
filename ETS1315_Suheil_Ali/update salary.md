## Problem Analaysis

input: basic salary , over time and normal  bonus rate and worked hour

opration: calculating tax , pension , bonus gross salary and net salary

output: net salary pr net pay 

## Pseudocode

1. start the program

2. read basic salar , worked hour , bonus rate

3. if worked hour is greater than 40 ask the user to input over time bonus rate

4. calculate bonus as bonus = (40 * bonus_rate) + (overtime_workedhour * overtime_bonusrate)

5. if not calculate bonus as bonus = worked_hour * bonus_rate

6. calculate gross salary as gross_salary = basic_salary + bonus 

7. check tax amount
   
   1. if basic salary is >=0 and <=200 , tax=0
   
   2. if basic_salary > 200 AND basic_salary <= 600 , tax = gross_salary * 0.1
   
   3. if basic_salary > 600 AND basic_salary <= 1200, tax = gross_salary * 0.15
   
   4. if basic_salary > 1200 AND basic_salary <= 2000,tax = gross_salary * 0.2
   
   5. if basic_salary > 2000 AND basic_salary <= 3500, tax = gross_salary * 0.25
   
   6. if basic_salary > 3500 , tax=gross_salary * 0.3

8. pension = basic_salary * 0.07

9. print pension , gross salary , tax  in birr

10. net_pay = gross_salary - pension - tax

11. print net pay in birr

12. stop the program
