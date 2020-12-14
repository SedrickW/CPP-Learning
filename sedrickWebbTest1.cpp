#include <iostream>

using namespace std;

int main()
{

	int min;
	int hrs;
	int sec;
	int secRem; 
	int minRem;

	cout << "Enter seconds: ";
	cin >> sec;


	secRem = secTotal % 60;
	min = seconds / 60;
	minRem = min % 60
	hrs = min / 60;


	cout << endl << sec << " seconds is ";
	cout << hrs << " hours, ";
	cout << minTem << " minutes, " << secRem << " seconds. \n";


	return 0;
}