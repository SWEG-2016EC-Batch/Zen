#include <iostream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
    // Constants
    const double transmissionRate = 960;  // Transmission rate in characters per second (960 characters per second)
    const double fileSizeInBytes = 419430400;  // 400 MB file size in bytes (419,430,400 bytes)

    // Calculate the time required to send the file (in seconds)
    double timeInSeconds = fileSizeInBytes / transmissionRate;

    // Convert the time into more readable formats: days, hours, minutes, seconds
    double timeInDays = timeInSeconds / (60 * 60 * 24);
    double remainingHours = (timeInSeconds / 3600);
    int hours = static_cast<int>(remainingHours) % 24;
    int minutes = static_cast<int>((timeInSeconds / 60)) % 60;
    int seconds = static_cast<int>(timeInSeconds) % 60;

    // Display the results
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "Time to send a 400MB file over a serial transmission line:\n";
    cout << "Time in seconds: " << timeInSeconds << " seconds\n";
    cout << "Equivalent to: " << timeInDays << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds.\n";

    return 0;
}
