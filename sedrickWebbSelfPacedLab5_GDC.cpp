#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;

    int numtimesran = 0;

    cout << "Imput two numbers.\n1st number: ";
    cin >> num1;
    while (num1 < 1)
    {
        cout << "That number is not valid. Please re-enter a positive integer.\n";
        cin >> num1;
    }

    cout << "\n2nd Number: ";
    cin >> num2;
    while (num2 < 1)
    {
        cout << "That number is not valid. Please re-enter a positive integer.";
        cin >> num2;
    }

    while (num1 != 0)
    {
        int temp = num1;
        num1 = num2 % temp;
        num2 = temp;

        numtimesran++;
    }
    cout << "The GCD bettween the numbers above is " << num2 << ".\nThe code cycled " << numtimesran << " times.";

    return 0;
}