Flowchart Description
Steps
Start: Begin the program.
Display Title: Show "Employee Salary Calculator".
Input Name: Prompt and read the employee's name.
Input Weekly Working Hours: Ask the user for the number of hours worked per week.
Input Bonus Rate: Ask for the bonus rate per hour.
Input Base Salary: Request the base salary of the employee.
Calculate Bonus Payment:
Bonus Payment
=
Weekly Working Hours
×
Bonus Rate
Bonus Payment=Weekly Working Hours×Bonus Rate
Calculate Gross Salary:
Gross Salary
=
Base Salary
+
Bonus Payment
Gross Salary=Base Salary+Bonus Payment
Calculate Pension Deduction:
Pension Deduction
=
Gross Salary
×
5
%
Pension Deduction=Gross Salary×5%
Calculate Tax Deduction:
Tax Deduction
=
Gross Salary
×
15
%
Tax Deduction=Gross Salary×15%
Calculate Net Salary:
Net Salary
=
Gross Salary
−
(
Pension Deduction
+
Tax Deduction
)
Net Salary=Gross Salary−(Pension Deduction+Tax Deduction)
Display Results:
Employee Name
Weekly Working Hours
Base Salary
Bonus Payment
Gross Salary
Pension Deduction
Tax Deduction
Net Salary



START

DISPLAY "Employee Salary Calculator"
DISPLAY "---------------------------"

DISPLAY "Enter employee name: "
READ name

DISPLAY "Enter weekly working hours: "
READ weeklyHours

DISPLAY "Enter bonus rate per hour: "
READ bonusRate

DISPLAY "Enter base salary: "
READ baseSalary

CALCULATE bonusPayment AS weeklyHours * bonusRate
CALCULATE grossSalary AS baseSalary + bonusPayment
CALCULATE pensionDeduction AS grossSalary * 0.05
CALCULATE taxDeduction AS grossSalary * 0.15
CALCULATE netSalary AS grossSalary - (pensionDeduction + taxDeduction)

DISPLAY "Employee Name: ", name
DISPLAY "Weekly Working Hours: ", weeklyHours
DISPLAY "Base Salary: ", baseSalary
DISPLAY "Bonus Payment: ", bonusPayment
DISPLAY "Gross Salary: ", grossSalary
DISPLAY "Pension Deduction: ", pensionDeduction
DISPLAY "Tax Deduction: ", taxDeduction
DISPLAY "Net Salary: ", netSalary

END

End: Terminate the program.
