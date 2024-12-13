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


