## Problem Analysis
Input: name, working hour, bonus rate, salary.  
Operation: Calculating bonus payment as (working hour * bonus rate), Gross income (Income) as (salary + bonus payment) and Net salary as salary-5% of salary-15% of income + bonus payment.  
Output: Name, Bonus Payment, Gross Income (Income) and Net Salary.
## Psuedocode
1.	Start 
2.	Read the name of the employee.
3.	Read weekly working hour as working hours.
4.	Read bonus rate per hour as bonus rate.
5.	If bonus rate < 0 or bonus rate > 1 or invalid input, then print invalid input.
6.	Go to step 4.
7.	Read base salary as salary.
8.	Calculate bonus payment as (working hours * bonus rate).
9.	Calculate gross salary as (salary + bonus payment).
10.	Calculate net salary as salary-5% of salary-15% of (salary + bonus payment) + bonus payment.
11.	Print name of the employee.
12.	Print bonus payment.
13.	Print gross Salary
14.	Print net salary 
15.	End.