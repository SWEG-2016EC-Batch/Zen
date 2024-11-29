Flowchart Description
Start: Begin the process.
Display Title: Show "Exponentiation Calculator (x^y)".
Input Base: Prompt the user to input the base value 
𝑥
x.
Input Exponent: Prompt the user to input the exponent value 
𝑦
y.
Calculate Result:
Use the formula 
Result
=
𝑥
𝑦
Result=x 
y
 , implemented via the pow(x, y) function.
Display Result: Output the calculated result in the format "Result of 
𝑥
𝑦
=
result
x 
y
 =result".
End: Terminate the program.


START

DISPLAY "Exponentiation Calculator (x^y)"
DISPLAY "-------------------------------"

DISPLAY "Enter the base value (x): "
READ x

DISPLAY "Enter the exponent value (y): "
READ y

CALCULATE result AS pow(x, y)

DISPLAY "Result of ", x, "^", y, " = ", result

END


