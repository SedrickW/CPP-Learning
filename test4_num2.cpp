#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct planet
{
	string name;
	double distFromSun; // In millions of miles
};

int main()
{
	const int size = 8;

	planet MilkyWay[size];

	MilkyWay[0].name = "Mercury";
	MilkyWay[0].distFromSun = 43.329;

	MilkyWay[1].name = "Venus";
	MilkyWay[1].distFromSun = 67.091;

	MilkyWay[2].name = "Earth";
	MilkyWay[2].distFromSun = 91.501;

	MilkyWay[3].name = "Mars";
	MilkyWay[3].distFromSun = 138.95;

	MilkyWay[4].name = "Jupiter";
	MilkyWay[4].distFromSun = 474.54;

	MilkyWay[5].name = "Saturn";
	MilkyWay[5].distFromSun = 926.9;

	MilkyWay[6].name = "Uranus";
	MilkyWay[6].distFromSun = 1838;

	MilkyWay[7].name = "Neptune";
	MilkyWay[7].distFromSun = 2781.3;

	cout << "Planet Name:" << setw(43) << "Distance frome the sun (In billions):";

	for (int i = 0; i < size; i++)
	{
		cout << endl << MilkyWay[i].name << setw(20) << MilkyWay[i].distFromSun << " million miles from the sun";
	}

	return 0;
}