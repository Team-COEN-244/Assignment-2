#include <iostream> 
#include "CheckingAccount.h" // include definiton of class CheckingAccount from CheckingAccount.h

using namespace std;

CheckingAccount::CheckingAccount()
{
    tax = 0;
}

void CheckingAccount::setCheckingAccount (double balance_, double tax_) // Creating a Checking account, derived from Account class
{
    Account::setAccount(balance_); // set the new balance with the constructor
    tax = tax_;
}

void CheckingAccount::credit(double amount) // Crediting an amount deducting the taxes
{
    Account::credit(amount - tax);
}

double CheckingAccount::debit(double amount) // Debiting the amount with taxes if it is possible
{
    amount += tax;
    if (Account::debit(amount + tax)) // Verifying if there are enough money in the Account
    {
        return balance;
    }
    else // There are not enough money in the Account
    {
        Account::debit(amount + tax);
        return balance;
    }
}

CheckingAccount::~CheckingAccount()
{}
