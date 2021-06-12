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
	void Deactivate();
	bool IsActive() const;
	void Print()const;
	int GetID() const;
	string GetHolderName() const;
	int GetBalance() const;
	void addDailyInterest();

	BankAccount();
	BankAccount(int ID, string name, int balance);

private:
	int accountID = 00000-00000;
	string  accountHolderName = "JohnDoe";
	int accountBalance = 0000;
	double interest = 0.1;
};
