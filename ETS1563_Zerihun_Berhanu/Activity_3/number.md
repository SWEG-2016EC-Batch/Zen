### Psuedocode
1.	Start
2.	Initialize backward = 0, count = 0, even = 1, sum = 0.
3.	Initialize isEven = false.
4.	Read number.
5.	originalNum = num.
6.	Print: <br>
```
   1. Prints the reverses of the number. <br>
   2. Counts the number of digits in a given number. <br>
   3. Find the product of even digits of a given number. <br>
   4. Print the first and the last digit of the number and find their sum. <br>
   5. Swap the first and the last digit of the number. <br>
   6. Check whether a number is palindrome or not. <br>
   7. Find the frequency of each digit in a given integer and print in table format. <br>
   8. Check if a number is Strong or not. <br>
   9. Check whether a number is Perfect number or not.
```
7.	Read choice
8.	If choice equals to 1, then <br>
     I.	rem = num % 10. <br>
    II.	num = num / 10. <br>
   III.	backward = backward * 10 + rem. <br>
    IV.	If num is not equals to 0, then go to step I. <br>
     V.	Else print backward.
9. Else if choice equals to 2, then <br>
I.	rem = num % 10. <br>
II.	num = num / 10. <br>
III.	count++. <br>
IV.	If num is not equals to 0, then go to step I. <br>
V.	Else print count.
10.	Else if choice equals to 3, then <br>
I.	rem = rem % 10. <br>
II.	num = num / 10. <br>
III.	If (rem % 2) = 0, then <br>
even = even*rem. <br>
iseven = true. <br>
IV.	If num is not equals to 0, then go to step I. Else proceed to the next. <br>
V.	If iseven = true, then print even. <br>
VI.	Else print there is no even number in the given number. 
11. Else if choice equals to 4, then <br>
I.	lastDigit = num % 10. <br>
II.	rem = num % 10. <br>
III.	num = num / 10.<br>
IV.	firstDigit = rem. <br>
V.	If num is not equals to 0, then go to step II. <br>
VI.	Else sum = firstDigit + lastDigit. <br>
VII.	Print first digit. <br>
VIII.	Print last digit. <br>
IX.	Print sum. 
12.	 Else if choice equals to 5, then <br>
I.	Initialize multiple = 1. <br>
II.	rem = num % 10. <br>
III.	num = num / 10. <br>
IV.	count++. <br>
V.	If num is not equals to 0, then go to step II. Else proceed to the next. <br>
VI.	Initialize i = 0. <br>
VII.	multiple = multiple * 10. <br>
VIII.	If i < (count-1), then go to step VII. Else proceed to the next. <br>
IX.	middleNum = (originalNum % multiple) / 10. <br>
X.	swappedNum = (lastDigit * multiple) + middleNum * 10 + firstDigit. <br>
XI.	Print swappedNum. <br>
13.	 Else if choice equals to 6, then 
I.	rem = num % 10. <br>
II.	num = num / 10. <br>
III.	backward = backward * 10 + rem. <br>
IV.	If num is not equals to 0, then go to step II. Else proceed to the next. <br>
V.	If originalNum is equals to backward, then print the number is palindrome. <br>
VI.	Else print the number is not palindrome. <br>
14.	 Else if choice equals to 7, then <br>
I.	Intialize count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0. <br>
II.	rem = num % 10.
*	If rem = 0, then count0++.
*	If rem = 1, then count1++.
*	If rem = 2, then count2++.
*	If rem = 3, then count3++.
*	If rem = 4, then count4++.
*	If rem = 5, then count5++.
*	If rem = 6, then count6++.
*	If rem = 7, then count7++.
*	If rem = 8, then count8++.
*	If rem = 9, then count9++. <br>
III.	num = num / 10. <br>
IV.	If num is not equals to 0, then go to step II. Else proceed to the next. <br>
*	If count0 is not equals to 0, then print count0.
*	If count1 is not equals to 0, then print count1.
*	If count2 is not equals to 0, then print count2.
*	If count3 is not equals to 0, then print count3.
*	If count4 is not equals to 0, then print count4.
*	If count5 is not equals to 0, then print count5.
*	If count6 is not equals to 0, then print count6.
*	If count7 is not equals to 0, then print count7.
*	If count8 is not equals to 0, then print count8.
*	If count9 is not equals to 0, then print count9.
15.	 Else if choice equals to 8, then <br>
I.	num = originalNum. <br>
II.	Initialize factor = 1, i = 1. <br>
III.	rem = num % 10. <br>
IV.	If i <= rem, then <br>
  i. factor = factor*i. <br>
  ii. i++. <br>
  iii. sum = sum + factor. <br>
  iv. num = num / 10. <br>
V.	If i <= rem, then go to step i. Else exit the loop. <br>
VI.	If num is not equals to 0, then go to step III. Else proceed to the next. <br>
VII.	If sum = originalNum, print the number is strong number. <br>
VIII.	Else, print the number is no strong number. <br>
16.	 Else if choice equals to 9, then <br>
I.	Initialize i = 1. <br>
II.	If i <= num/2. <br>
i.	If (num % i) = 0, then sum = sum + i. <br>
ii.	i++. <br>
iii.	If i <= num/2, then go to step i. Else proceed to the next. <br>
III.	If sum is equals to num, then print the number is perfect number. <br>
IV.	Else, print the number is not perfect number. <br>
17.	 End










