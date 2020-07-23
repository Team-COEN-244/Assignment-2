#include <iostream>
#include "Account.h" // Include definition of class Account from Account.h

using namespace std;

Account::Account()
{
    balance = 0.0;
}

int Account::setAccount(double balance_)
{
    if (balance_ >= 0.0)
    {
        balance = balance_; // Assigning local variable value to the data member
        return balance;
    }
    else
    {
        balance = 0.0; // Error message when the balance is negative
        cout << "Error : The initial balance was invalid. Current balance to 0.0" << endl; 
        return balance;
    }
}

double Account::getBalance()
{
    return balance; // Chain function calls 
}

void Account::credit(double amount)
{
    balance += amount; // Add the amount to the balance of the account balance
}

bool Account::debit(double amount)
{
    if (balance >= amount) // Verify if there are enough money in the Account
    {
        balance -= amount; // Substract the amount of the account balance
        return true;
    }
    else
    { // Error message because there is not enough money
        cout << "Debit's amount exceeds account's balance. The balance has not been changed" << endl; 
        return false;
    }
    
}

Account::~Account() // Destructor
{}
