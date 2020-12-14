#include<iostream>
#include <math.h>

using namespace std;

int Square(double num);
double Sqrroot(double num);

int main()
{
	const int size = 3;
	double num[size];
	
	cout << "Please enter " << size << " numbers:" << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (num[i] < 0)
		{

			num[i] = Square(num[i]);
		}
		else if (num[i] > 0)
		{
			num[i] = Sqrroot(num[i]);
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << endl << num[i];
	}
	return 0;
}

int Square(double num)
{
	return (pow(num, 2));
}

double Sqrroot(double num)
{
	return (sqrt(num));
}