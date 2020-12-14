#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Source: www.statista.com, 2010
    int NUM_CTRY = 5;             // Num countries supported
    vector<string> ctryNames(NUM_CTRY); // Country names
    vector<int>    ctryMins(NUM_CTRY);  // Mins TV watched daily
    string userCountry;                 // User defined country
    string newCountry;
    int newMins;
    bool foundCountry = false;          // Match to country supported
    int i = 0;                          // Loop index
    int ctryHours = 0;                  // Holds calculated hours
    int maxMin = 0;
    int maxIteration;

    // Define vector contents
    ctryNames.at(0) = "China";
    ctryMins.at(0) = 158;

    ctryNames.at(1) = "India";
    ctryMins.at(1) = 119;

    ctryNames.at(2) = "Russia";
    ctryMins.at(2) = 226;

    ctryNames.at(3) = "UK";
    ctryMins.at(3) = 242;

    ctryNames.at(4) = "USA";
    ctryMins.at(4) = 283;

    // Prompt user for country name
    cout << "Enter country name: ";
    cin >> userCountry;

    // Find country's index and avgerage TV time
    foundCountry = false;
    for (i = 0; i < NUM_CTRY; ++i) {
        if (ctryNames.at(i) == userCountry) {
            foundCountry = true;
            
            ctryHours = ctryMins.at(i) / 60;
            
            ctryMins.at(i) = ctryMins.at(i) % 60;

            cout << "People in " << userCountry << " watch ";
            cout <<ctryHours<<" hours and " << ctryMins.at(i) << " mins of TV daily." << endl;
            break;
        }
    }
    if (userCountry == "Print")
    {
        for (i = 0; i < NUM_CTRY; ++i)
        {
            foundCountry = true;

            ctryHours = ctryMins.at(i) / 60;

            ctryMins.at(i) = ctryMins.at(i) % 60;

            cout << endl << "People in " << ctryNames.at(i) << " watch ";
            cout << ctryHours << " hours and " << ctryMins.at(i) << " mins of TV daily." << endl;
        }
        return 0;
    }
    if (userCountry == "Max")
    {
        
        for (i = 0; i < NUM_CTRY; ++i)
        {

            
            if (maxMin < ctryMins.at(i))
            {
                foundCountry = true;
                maxMin = ctryMins.at(i);
                maxIteration = i;
            }
        }
        ctryHours = ctryMins.at(maxIteration) / 60;
        ctryMins.at(maxIteration) = ctryMins.at(maxIteration) % 60;

        cout << endl << "People in " << ctryNames.at(maxIteration) << " watch the most at ";
        cout << ctryHours << " hours and " << ctryMins.at(maxIteration) << " mins of TV daily." << endl;
        return 0;
    }
    if (userCountry == "Add")
    {
        cout << "Enter a country name."<<endl;
        cin >> newCountry;
        cout << "Enter the amount of time that the country watches TV." << endl;
        cin >> newMins;
        
        ctryMins.push_back(newMins);
        ctryNames.push_back(newCountry);
        NUM_CTRY++;
    }
    if (userCountry == "Mod")
    {
        cout << "Enter a country that you would like to change.\n";
        cin >> userCountry;
        for (i = 0; i < NUM_CTRY; ++i)
        {
            if (ctryNames.at(i) == userCountry) 
            {
                cout << "What will the new time be?\n";
                cin >> newMins;
                ctryMins.at(i)= newMins;
                break;
            }
        }
    }
    if (userCountry == "Del")
    {
        cout << "What country do you want to delete?\n";
        cin >> userCountry;

        for (i = 0; i < NUM_CTRY; ++i)
        {
            if (ctryNames.at(i) == userCountry)
            {
                //foundCountry = true; // spits out a run time check error when it prints out the list of states after.
                ctryNames.erase(ctryNames.begin() + i);
                ctryMins.erase(ctryMins.begin() + i);
                break;
            }
        }
    }
    if (!foundCountry) {
        for (i = 0; i < NUM_CTRY; ++i)
        {
            ctryHours = ctryMins.at(i) / 60;

            ctryMins.at(i) = ctryMins.at(i) % 60;

            cout << endl << "People in " << ctryNames.at(i) << " watch ";
            cout << ctryHours << " hours and " << ctryMins.at(i) << " mins of TV daily." << endl;
        }
    }

    return 0;
}