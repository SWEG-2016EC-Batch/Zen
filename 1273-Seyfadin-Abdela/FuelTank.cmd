Flowchart Description
Start: Begin the process.
Display Title: Show "Automobile Range Calculator".
Input Tank Capacity: Ask the user for the fuel tank capacity in gallons.
Input Fuel Efficiency: Ask the user for the fuel efficiency in miles per gallon.
Validate Input:
If either tank capacity or fuel efficiency is less than or equal to 0, display an error message and terminate the program.
Calculate Distance: Compute the maximum distance using:
Distance
=
Tank Capacity
×
Miles Per Gallon
Distance=Tank Capacity×Miles Per Gallon
Display Result: Show the maximum distance the automobile can travel without refueling.
End: Terminate the program.




START

DISPLAY "Automobile Range Calculator"
DISPLAY "----------------------------"

DISPLAY "Enter the capacity of the fuel tank (in gallons): "
READ tankCapacity

DISPLAY "Enter the fuel efficiency (miles per gallon): "
READ milesPerGallon

IF tankCapacity <= 0 OR milesPerGallon <= 0 THEN
    DISPLAY "Error: Both capacity and fuel efficiency must be positive values."
    EXIT
ENDIF

CALCULATE maxDistance AS tankCapacity * milesPerGallon

DISPLAY "The automobile can drive approximately ", maxDistance, " miles without refueling."

END
