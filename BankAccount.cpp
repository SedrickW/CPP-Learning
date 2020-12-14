#include <iostream>
#include <string>

#include "BankAccount.h"

using namespace std;
BankAccount::BankAccount(int ID, string name, int balance) 
{
	accountID = ID;
	accountHolderName = name;
	accountBalance = balance;
	return;
}

BankAccount::BankAccount()
{
	accountID = 00000 - 00000;
	accountHolderName;
	accountBalance = 0;
	return;
}
void BankAccount::initialize(int ID, string name, int balance)
{
	accountID = ID;
	accountHolderName = name;
	accountBalance = balance;
	return;
}
void BankAccount::SetHolderName(string name)
{
	accountHolderName = name;
	return;
}
void BankAccount::IncreaseBalance(int amount)
{
	accountBalance = accountBalance + amount;
	return;
}
void BankAccount::DecreaseBalance(int amount)
{
	accountBalance = accountBalance - amount;
	return;
}
void BankAccount::Deactivate()
{
	accountID = 00000 - 00000;
	accountHolderName = "";
	accountBalance = 0;
	return;
}
bool BankAccount::IsActive() const
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
void BankAccount::Print()const
{
	cout << "Account holders name: " << accountHolderName << endl;
	cout << "AccountID: " << accountID << endl;
	cout << "Account balance: " << accountBalance << endl;
	return;
}
int BankAccount::GetID() const
{
	return accountID;
}
string BankAccount::GetHolderName() const
{
	return accountHolderName;
}
int BankAccount::GetBalance() const
{
	return accountBalance;
}
void BankAccount::addDailyInterest()
{
	accountBalance = accountBalance + (accountBalance * interest);
	return;
}