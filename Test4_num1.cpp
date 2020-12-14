#include<iostream>
#include <math.h>

using namespace std;

int square(double num);
double sqrroot(double num);

int main()
{
	const int size = 3;
	double num[size];

	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (num[i] < 0)
		{

			num[i] = square(num[i]);
		}
		else if (num[i] > 0)
		{
			num[i] = sqrroot(num[i]);
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << endl << num[i];
	}
	return 0;
}

int square(double num)
{
	return (pow(num, 2));
}

double sqrroot(double num)
{
	return (sqrt(num));
}