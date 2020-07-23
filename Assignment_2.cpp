/* Mélina Deneuve ID#40153103
   Rudy Zoghaib   ID#40025399
Assignment - 2 - COEN 244
Environment : Visual Studio 2019 */

#include <iostream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;
void transaction(CheckingAccount&, double&);

int main()
{
	double money, rate{ 0 }, tax{ 0 }, amount{ 0 };
	cout << "I will, through this programm, ask you to enter some values relative to you account, if you don't mind."
		<< "\nI am creating an account or you.\nHow much money do you have in your account ?" << endl;
	cin >> money;
	Account* account = new Account(money);
	CheckingAccount* virtual_account = new CheckingAccount(money, tax);
	account = virtual_account;
	cout << "\nThen your initial account's balance is: $" << account->getBalance() << endl;
	transaction(*virtual_account, amount);
	money = amount;
	cout << "\nI will now calculate the interests of a saving's account for you, depending on the rate of your bank." << endl
		<< "What is the current interest rate (in %) of your bank ?" << endl;
	cin >> rate;
	SavingsAccount savings_account(money, rate);
	cout << "\nThe balance of your account is still $" << savings_account.getBalance() << endl;
	cout << "The interests of the saving's account you have is$ " << savings_account.calculateInterest();

	cout << "\n\nI will now create an other account for you."
		<< "\nThis account has fees per transaction. "
		<< "I will calculate everything for you, don't worry." << endl
		<< "Please enter the amount (in $) of the taxes the banks takes from your account." << endl;
	cin >> tax;
	CheckingAccount checking_account(money, tax);
	cout << "\nThe intial balance of the Cheking account is$ " << checking_account.getBalance() << endl;
	transaction(checking_account, amount);
	return 0;
}

void transaction(CheckingAccount& account, double& amount)
{
	string input;

	cout << "\nIf you want to make a debit or a credit in your account, please enter 'credit' or 'debit." << endl
		<< "If you don't want to make any transactions at all, please enter 'stop'.\n";
	cin >> input;
	do
	{
		if (input == "credit")
		{
			cout << "Ok, then enter the amount I have to credit in your account.\n";
			cin >> amount;
			account.credit(amount);
			cout << "The new balance in your account is: $" << account.getBalance() << endl;
			cout << "\nDo you want to make an other transaction ?\nPlease enter credit, debit, or write stop to finish all the transactions.\n";
			cin >> input;
		}
		else if (input == "debit")
		{
			cout << "Ok, then enter the amount I have to debit from your account.\n";
			cin >> amount;
			account.debit(amount);
			cout << "The new balance in your account is: $" << account.getBalance() << endl;
			cout << "Do you want to make an other transaction ?\nPlease enter credit, debit, or write stop to finish all the transactions.\n";
			cin >> input;
		}
		else if (input != "stop")
		{
			cout << "I don't understand what you wrote, please enter either debit, credit or stop to let me know what to do.\n";
			cin >> input;
		}
	} while (input != "stop");
	amount = account.getBalance();
}
