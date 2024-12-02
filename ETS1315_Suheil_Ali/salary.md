## Problem Analaysis

- Input: base salary , bonus rate per hour and weekly working hour 

- Process: calculating gross salary (adding up the base salary and the bonus(bonus rate x weekly working hour)) 
  
  * calculating tax
  
  * calculating pension
  
  * calculating net salary

- Output: displaying gross salary , bonus and net salary
  
  ## Pseudocode
  
  steps:
  
  1. start the program
  
  2. Read basesalary 
  
  3. if base salary is not number or less than 0 goto line 2
  
  4. Read weeklyworkinghour
  
  5. if weeklyworkinghour is less than 0 or not number goto line 6
  
  6. Read bonusrate 
  
  7. if bonus rate is greater than 1 and less than 0 or not number goto line 4
  
  8. bonus = 4*(weeklyworkinghour*bonusrate)
  
  9. display bonus
  
  10. pension = basesalary x 0.05
  
  11. display pension
  
  12. tax = (basesalary + bonus)*0.15
  
  13. display tax 
  
  14. netsalary= 0.8* baseSalary + 0.85*bonus
  
  15. gross salary = basesalary + bonus
  
  16. display gross salary and netsalary
  
  17. end program
      
      ## Flowchart
      
      
