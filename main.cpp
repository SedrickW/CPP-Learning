#include <iostream>
#include <string>
#include "BankAccount.h"

using namespace std;

int main()
{
	BankAccount cust1(001, "Sedrick", 50);
	//cust1.initialize(001, "Sedrick", 50);
	cout << endl;
	cust1.Print();
	cout << endl;

	if (cust1.IsActive() == false)
	{
		cout << "That is not an active account.";
	}
	else
	{
		cout << "The account is active.";
	}
	cust1.SetHolderName("James");
	cout << endl << cust1.GetHolderName();
	
	cust1.IncreaseBalance(5);
	cout << endl << cust1.GetBalance();
	cust1.DecreaseBalance(5);
	
	cout << endl << endl << "Adding interest:";
	cust1.addDailyInterest();

	cout << endl << "Balance: " << cust1.GetBalance();
	cout << endl << "Customer ID: " << cust1.GetID() << endl;

	cust1.Deactivate();
	cout << endl;
	cust1.Print();

	return 0;
}