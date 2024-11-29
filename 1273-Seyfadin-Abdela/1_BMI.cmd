Start: Start of the program.
Input: Nodes for entering weight and height.
Decision: Check for valid input and category determination (e.g., BMI < 18.5).
Processing: Calculate BMI.
Output: Display BMI, category, and prompt for continuation.
Loopback: If the user wants to calculate another BMI, go back to input.



START

DISPLAY "Body Mass Index (BMI) Calculator"
SET continueProgram TO 'Y'

WHILE continueProgram IS 'Y' OR 'y' DO
    DISPLAY "Enter weight in kilograms: "
    READ weight
    DISPLAY "Enter height in meters: "
    READ height

    IF weight <= 0 OR height <= 0 THEN
        DISPLAY "Error: Weight and height must be positive values."
        CONTINUE
    ENDIF

    CALCULATE bmi AS weight / (height * height)
    
    IF bmi < 18.5 THEN
        SET category TO "Underweight"
    ELSE IF bmi >= 18.5 AND bmi < 24.9 THEN
        SET category TO "Normal weight"
    ELSE
        SET category TO "Overweight"
    ENDIF

    DISPLAY "BMI: ", bmi
    DISPLAY "Category: ", category

    DISPLAY "Do you want to calculate BMI for another person? (Y/N): "
    READ continueProgram
ENDWHILE

DISPLAY "Thank you for using the BMI Calculator!"
END

