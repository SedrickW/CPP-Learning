#include <iostream>


using namespace std;

// refrence for the correct number sequence https://miniwebtool.com/list-of-fibonacci-numbers/?number=100

int main()
{
	
	double setpercision(0) fib[100]; //FIXME:overflows after 93.
	int x = 100;

	fib[0] = 0;
	fib[1] = 1;
	
	for (int i = 2; i < 100; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2]; //calculates the fibonacci numbers...
		//cout << i; //add commented code in order to show what number is being printed.
		//cout << endl << fib[i] << endl;
	}
	
	cout << "Choose a number in the fibonacci sequence.(1-100)";
	cin >> x;
	cout << "The outputted number is " << fib[x] << ".";
	
	return 0;
}
