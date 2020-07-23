#include <iostream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;
void transaction(Account);

int main()
{
	Account Account;
	double money, rate, tax, balance{ 0 };
	cout << "I will, through this programm, ask you to enter some values relative to you account, if you don't mind."
		<< "\nI am creating an account or you.\nHow much money do you have in your account ?" << endl;
	cin >> money;
	Account.setAccount(money);
	cout << "Then your initial account's balance is: $" << Account.getBalance() << endl;
	transaction(Account);


	cout << "I will now calculate the interests of a saving's account for you, depending on the rate of your bank.";
	SavingsAccount Savings_Account;
	balance = Savings_Account.getBalance();
	cout << "The balance of your account is still " << Savings_Account.getBalance() << endl
		<< "What is the current interest rate of your bank ?" << endl;
	cin >> rate;

	Savings_Account.setSavingsAccount(balance, rate);
	cout << "The interests of the saving's account you have is$ " << Savings_Account.calculateInterest();

	CheckingAccount Checking_Account;
	balance = Checking_Account.getBalance();
	cout << "I will now create an other account for you."
		<< "\nThis account has fees per transaction."
		<< "I will calculate everything for you, don't worry." << endl
		<< "Please enter the amount of the tax the banks takes from your account" << endl;
	cin >> tax;
	Checking_Account.setCheckingAccount(balance, tax);
	cout << "The intial balance of the Cheking account is$ " << Checking_Account.getBalance() << endl;
	transaction(Checking_Account);

	return 0;
}

void transaction(Account Account)
{
	string input;
	double amount;

	cout << "\nIf you want to make a debit or a credit in your account, please enter 'credit' or 'debit." << endl
		<< "If you don't want to make any transactions at all, please enter 'stop'.\n";
	cin >> input;
	do
	{
		if (input == "credit")
		{
			cout << "Ok, then enter the amount I have to credit in your account.\n";
			cin >> amount;
			Account.credit(amount);
			cout << "The new balance in your account is: $" << Account.getBalance() << endl;
			cout << "Do you want to make an other transaction ?\nPlease enter credit, debit, or write stop to finish all the transactions.\n";
			cin >> input;
		}
		else if (input == "debit")
		{
			cout << "Ok, then enter the amount I have to debit from your account.\n";
			cin >> amount;
			Account.debit(amount);	
			cout << "The new balance in your account is: $" << Account.getBalance() << endl;
			cout << "Do you want to make an other transaction ?\nPlease enter credit, debit, or write stop to finish all the transactions.\n";
			cin >> input;
		}
		else
		{
			cout << "I don't understand what you wrote, please enter either debit, credit or stop to let me know what to do.\n";
			cin >> input;
		}
	} while (input != "stop");
}
