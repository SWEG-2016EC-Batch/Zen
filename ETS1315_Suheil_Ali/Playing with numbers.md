## Problem Analaysis

Input : any choice 1-10 ;

opration : checking the number and compute according to choice 

output : desired result based on choice

## Pseudocode

1. strat the program

2. read choose number:
   
   1. Reverse a number
   
   2. Count number of digits
   
   3. Get the even products of a number 
   
   4. Get the first, the last digit, and their sum
   
   5. Swap the first and last digit of a number
   
   6. Check if a number is a Palindrome
   
   7. Know the frequency of digits in a number
   
   8. Check if a number is strong
   
   9. Check if a number is perfect
   
   10. Quit the program

3. if 1 is entered
   
   1. read number
   
   2. until number become 0
   
   3. remainder = number % 10
      reversed = reversed * 10 + remainder
      number = number / 10
   
   4. if number = 0 
   
   5. end loop
   
   6. print reversed.
   
   7. stop program and goto line 2(main line)

4. if 2 is entered
   
   1. read number
   
   2. until number is 0 
      i. number = number / 10
      ii. numcount = numcount + 1
   
   3. number =0 , end loop
   
   4. print numcount 
   
   5. end program and goto line 2(main line)

5. if 3 is entered
   
   1. read number
   
   2. product=1
   
   3. until number is 0
      
      i.remainder = number % 10
      ii.if remainder devides by 2 gives 0 remainder
      iii. product = product * remainder
       stop if
      
      iv.number = number / 10
   
   4. number = 0 ,end loop
   
   5. print product
   
   6. end program and goto line 2(main line)

6. if 4 is entered
   
   1. read number
   
   2. Ldigit = number % 10
   
   3. Fdigit = number
   
   4. while Fdigit is greater or equal 10
      
      i.  Fdigit = Fdigit / 10
      
      
   
   5. sum=Ldigit + Fdigit
      
      6. print Fdigit , Ldigit and sum
      
      7. end program and goto line 2(main line)

7. if 5 is entered
   
   1. read number
   
   2. devisor = 1
   
   3. temp=number
   
   4. Ldigit = temp % 10
   
   5. while temp >= 10
      
      i. temp = temp / 10
      
      ii. divisor = divisor * 10
   
   6. FDigit = temp
   
   7. number = (number % divisor) / 10
   
   8. number = LDigit * divisor + number * 10 + FDigit
   
   9. print number
   
   10. end program and goto line 2(main line)

8. if 6 is entered
   
   1. read number, remainder, reversed 
   
   2. first_num = number
   
   3. until number is 0
      
      i. remainder = number % 10
      ii. reversed = reversed * 10 + remainder
      iii. number = number / 10
   
   4. if first_num = reversed
      
      5. print The number is a palindrome
      
      6. if not
      
      7. print The number is not a palindrome
      
      8. stop program and goto line 2(main line)

9. if 7 is entered
   
   1. read 10 frequency variables as 0
   
   2. read number ,
   
   3. if number < 0 
      
      i. number = -number
   
   4. while number is is not 
      
      i. remainder = number % 10
      ii.INCREMENT frequency[remainder] BY 1
      iii.number = number / 10
   
   5. PRINT the amount from 0 to 9 in table form
   
   6. end program and goto line 2(main line)

10. if 8 is entered
    
    1. read number
    
    2. temp = number
    
    3. sum = 0
    
    4. while number is not 0 
       i.remainder = number % 10
       ii.fact =1
       iii. calculate factorial for remainder
       
       iv.sum = sum + fact
       
       v.number = number / 10
    
    5. temp = sum , print it is a strong number
    
    6. if not , print it is not a strong number
    
    7. stop program and goto line 2(main line)

11. if 9 is entered
    
    1. read number
    
    2. half = number / 2
    
    3. sum = 0
    
    4. add all the devisors
    
    5. if sum is equal with number , print the number is perfect
    
    6. if not , print the number is not perfect
    
    7. end orogram and goto line 2(main line)

12. if 10 is entered

13. stop the program.
