START

DISPLAY "Time to Send File Over Serial Transmission Line"
DISPLAY "-------------------------------------------"

DEFINE transmissionRate AS 960  // Transmission rate in characters per second
DEFINE fileSizeInBytes AS 419430400  // File size in bytes (400MB)

CALCULATE timeInSeconds AS fileSizeInBytes / transmissionRate

// Convert time in seconds to days, hours, minutes, and seconds
CALCULATE timeInDays AS timeInSeconds / (60 * 60 * 24)
CALCULATE remainingHours AS timeInSeconds / 3600
CALCULATE hours AS remainingHours MOD 24
CALCULATE minutes AS timeInSeconds / 60 MOD 60
CALCULATE seconds AS timeInSeconds MOD 60

DISPLAY "Time to send the file: ", timeInSeconds, " seconds"
DISPLAY "Equivalent to: ", timeInDays, " days, ", hours, " hours, ", minutes, " minutes, ", seconds, " seconds."

END
