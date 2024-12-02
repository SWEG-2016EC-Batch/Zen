## Problem Analysis
Input: File size, transmission rate.  
Operation: Claculate total time required as (file size * transmission rate.)  
Output: Total time required.
## Psuedocode
1.	Start
2.	Initialize transmission rate to 960.
3.	Read the size of the file as size.
4.	Decide the file size type as type.
5.	If type is mb, byte = size*10^6.
6.	If type is gb, byte = size*10^6*125.
7.	If type is tb, byte = size*10^12.
8.	If type is other value, then print invalid input then go to step 4.
9.	Calculate time required as byte/(transmission rate).
10.	If time required is greater than 3600, then calculate days = time required / 3600 then print it.
11.	Else print time required as it is. 
12.	End.
