#include <iostream>
#include <string>

using namespace std;


class BankAccount
{
public:
	void initialize(int ID, string name, int balance);
	void SetHolderName(string name);
	void IncreaseBalance(int amount);
	void DecreaseBalance(int amount);
	void Deactivate ();
	bool IsActive() const;
	void Print()const;
	int GetID() const;
	string GetHolderName() const;
	int GetBalance() const;

private:
	int accountID = 00000-00000;
	string  accountHolderName = "JohnDoe";
	int accountBalance = 0000;
};
void BankAccount :: initialize(int ID, string name, int balance)
{
	accountID = ID;
	accountHolderName = name;
	accountBalance = balance;
	return;
}
void BankAccount:: SetHolderName(string name)
{
	accountHolderName = name;
	return;
}
void BankAccount :: IncreaseBalance(int amount)
{
	accountBalance = accountBalance + amount;
	return;
}
void BankAccount::DecreaseBalance(int amount)
{
	accountBalance = accountBalance - amount;
	return;
}
void BankAccount :: Deactivate()
{
	accountID = 00000 - 00000;
	accountHolderName = "";
	accountBalance = 0;
	return;
}
bool BankAccount :: IsActive() const
{
	if (accountID == 00000 - 00000 && accountHolderName == "" && accountBalance == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void BankAccount :: Print ()const
{
	cout << "Account holders name: " << accountHolderName << endl;
	cout << "AccountID: " << accountID << endl;
	cout << "Account balance: " << accountBalance << endl;
	return;
}
int BankAccount :: GetID() const
{
	return accountID;
}
string BankAccount :: GetHolderName () const
{
	return accountHolderName;
}
int BankAccount::GetBalance() const
{
	return accountBalance;
}

int main()
{
	BankAccount cust1;
	cust1.initialize(001,"Sedrick",50);
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
	cout <<endl << cust1.GetHolderName();

	cust1.IncreaseBalance(5);
	cout <<endl << cust1.GetBalance();
	cust1.DecreaseBalance(5);
	cout <<endl <<"Balance: " << cust1.GetBalance();

	cout <<endl << "Customer ID: "<< cust1.GetID() << endl;
	cust1.Deactivate();
	cust1.Print();





	
	return 0;
}
