#include <iostream> 
#include "CheckingAccount.h" // include definiton of class CheckingAccount from CheckingAccount.h

using namespace std;


CheckingAccount::CheckingAccount(double& balance_, double& tax_) :Account(balance_)// Creating a Checking account, derived from Account class
{
    balance = balance_; // set the new balance with the constructor
    tax = tax_;
}

void CheckingAccount::credit(double& amount) // Crediting an amount deducting the taxes
{
    amount -= tax;
    Account::credit(amount);
}

bool CheckingAccount::debit(double& amount) // Debiting the amount with taxes if it is possible
{
    amount += tax;
    if (Account::debit(amount)) // Verifying if there are enough money in the Account
    {
        return true;
    }
    else // There are not enough money in the Account
    {
        Account::debit(amount);
        return false;
    }
}
