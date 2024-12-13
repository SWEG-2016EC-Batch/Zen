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
  







