## Problem Analysis
Input: Weight, Height.  
Operation: Weight/(Height*Height)  
Output: BMI
## Psuedocode
1.	Start
2.	Read weight as w.
3.	Read height as h.
4.	Calculate BMI as w/(h*h)
5.	If the user inserts negative value or 0 or other input other than number, then go to step 2.
6.	Else proceed to the next.
7.	Print BMI
*	If BMI < 18.5, print You are underweight.
*	If 18.5 <= BMI <= 24.9, print You are normal weight.
*	If BMI > 24.9, print You are overweight.
8.	Do you want to calculate BMI for another person? (yes/no). 
9.	Yes, go to step 2.
10.	No, go to step 14.
11.	End.
