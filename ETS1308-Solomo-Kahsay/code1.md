### Markdown a great program to code your algorithm desing in a better way 
#### When I see my first algorithm 😁🤦‍♂️
# Algorithm Design

# Q1
# Problem Analysis
## Input 
* base salary
* working hour
* bonus rate 
## Operation(process)
   ### calculating:
   * bonus  if working hour is greater than 40 hr and extra working hour.
   * gross salary
   * pension
   * tax
   * net salary
## Output
   ### Displaying the result for:
   * exra working hour
   * bonus 
   * gross salary
   * pension
   * tax ( with the given tax rate )
   * net salary 
  # Pseudocode
  1. Start the progarm
  2. prompt the user to input base salary, working hour, and bonus rate (if working hour greater than 40 hr)
  3. **the operation goes there:**  
   
      * extra working hour = ( working hour - 40 hr)
      * bonus = extra woring hour * bonus rate
      * gross salary = base salary + bonus
      * pension = base salary * 0.07
      * tax = gross salary * tax rate
  
        **tax rate:** if gross salary(br);

        * < 200, 0%
        * 200 - 600, 10%
        * 600 - 1200, 15%
        * 1200 - 2000, 20%
        * 2000 - 3500, 25%
        * (> 3500), 30%
  4. net salary = gross salary - pension - tax
  5. print the the values for:

      * exra working hour
      * bonus 
      * gross salary
      * pension
      * tax ( with the given tax rate )
      * net salary
  6.  End the program



# Q2
# Problen Analysis

## Input

* test
* quiz 
* project
* assignment
* final exam
## operation

* entering the result for each of the above variables and check if they are in ther range
* findint the total result by suming up all the above values
* finding their corosponing grade letter for the total result

## Output
  **Displaying the result for:**
  * test
  * quiz 
  * project
  * assignment
  * final exam
  * total result
  * grade letter
  
  # Pseudocode
  1. Start the program
  2. Declare all the variables you want 
  3. **The operation goes here**
     * Prompt the user to enter the test result and check if it's less than or qual to  15 if it's proceed to the next if not quite the program
      
     * Prompt the user to enter the quiz result and check if it's less than or equal 5 if it's proceed to the next if not quite the program
  
     * Prompt the user to enter the project result and check if it's less than or equal 20 if it's proceed to the next if not quite the program

     * Prompt the user to enter the assignment result and check if it's less than or equal 10 if it's proceed to the next if not quite the program
  
     * Prompt the user to enter the final exam result and check if it's less than or equal 50 if it's proceed to the next if not quite the program
  
     * finding the total result by add all the variable values
     * checking the total result for its corresponding grade letter
  4. print the valus for:
       *  quiz, test, project, assignment, final exam, and total result
       *  the grade letter for the given total result
   5. End the program



  # Q3

## A)
# Problem Analysis

## Input
* number
## process
 * check if a number is divisble by 10 if true the number will not have a reversed form
 * if it's not divisible by 10, find the remenders and store it  on the reverse number until you finish the number
## Output
  * resered number
 # pseudocode
  1.  Start the program
  2.  Declare and intialize the variables
  3.  Prompt the user to enter a number
  4.  If number is divisible by 10 print the number hasn't a reversed form
  5.  else 
      * find the remender of a number divided by 10
      * update ther ther reversed number as: reversed number = reversed number * 10 + remender
      * update the number as number = number / 10 (integer  value), work until the number be 0;
  6. Print the reversed number
  7. End the program


## B)
# Problem Analysis
## Input
 * number
## Process
 * check if the number is 0 or not, if 0 unknown digit
 * else intialize the count to 0 and count the number of times the number is divisible by ten until the quoient is 0 and ther remener is the number itself
## Output
 * print the number of digits the given number has
# Pseudocode
1. Start the program
2. Prompt the user to enter a number and intialze the count to zero
3. Check if the number isn't zero ( if it's zero print unknown digit) 
4. Else count the number of digits by dividing a number by 10 until you get the quoeit zero and update the count for each itiration
5.  Print the number of digits the number has
6.  End the program


## C)
# Problem Analysis

## Input 

* number
  
## Process

* counting a digit
* checking the even digit
* performig the product on the even digit
## Output

* the even digit
* the produt of the even digit

# Pseudocode

1. Start the program
2. Declare and intialize the variables
3. Prompt the user to enter a number
4. Count a digit and check the even one
5. Performing a product on the even digit and stored at a variable product
6. Print the even and the product of the given digits
7. End the program
   
## D)

# Problem Analysis

## Input 

* number

## Process

* finding the first and last digit
* performing their sum
* checking the number is negative and grater than 10

## Output

* displaying the first and the last digit of a given number
* print the sum of the the digits( first and last)
  
# Pseudocode

1. Start the program
2. Declaretion and intialization
3. checking the number if it is negative and greater than 10
4. Finding the first and the last digit of a number
5. Performing sum as sum = first digit + last digit
6. Print the firt, last digit, and sum
7. End the program









