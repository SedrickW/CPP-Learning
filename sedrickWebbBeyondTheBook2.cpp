#include <iostream>

using namespace std;

int main() 
{
    int userAgeYears = 1;
    int userAgeDays = 2;
    int userAgeMinutes = 3;
    int userAgeSeconds = 4;
    
    const int avgHeartRate = 72;
    int howManyBeats;
    
    const double avgHoursSlept = 6.8;
    double howManyHoursSlept = 5;
    
    cout << "Enter your age in years: ";
    cin >> userAgeYears;

    userAgeDays = userAgeYears * 365;
    userAgeMinutes = userAgeYears * 365 * 60;
    userAgeSeconds = userAgeYears * 365 * 60 * 60;
    howManyBeats = avgHeartRate * userAgeMinutes;
    howManyHoursSlept = userAgeDays * avgHoursSlept;
    cout << "You are " << userAgeDays << " days old.";
    cout << "\nYou are " << userAgeMinutes << " minutes old.";
    cout << "\nYou are " << userAgeSeconds << " seconds old."<< endl;
    
    cout << "On avrage a heart beats 72 times per minute... Since you were born your heart has beat ";
    cout << howManyBeats << " times." <<endl;

    cout << "You have slept around " << howManyHoursSlept << " hours.\n";

    if (userAgeYears <= 15)
    {
        cout << "Also, you are too young to drive!";
    }
    else
    {
        cout << "Also, you can drive!";
    }
    return 0;
}