#include <iostream>

using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;

    cout << "Imput three numbers.\n1st number: ";
    cin >> num1;
    cout << "\n2nd Number: ";
    cin >> num2;
    cout << "\n3rd Number: ";
    cin >> num3;

    if (num1 < num2 && num1 < num3)
    {
            cout << "The smallest number is " << num1;
    }
    else if (num2 < num3)
    {
        cout << "The smallest number is " << num2;
    }
    else
    {
        cout << "The smallest number is " << num3;
    }
    return 0;
}