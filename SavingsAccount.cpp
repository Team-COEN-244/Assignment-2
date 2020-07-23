#include <iostream> 
#include "SavingsAccount.h" // include definition of class SavingsAccount from SavingsAccount.h

using namespace std;

SavingsAccount::SavingsAccount()
{
    rate = 0.0;
}

void SavingsAccount::setSavingsAccount(double balance, double rate_) // creating a savings account, derived from Account class
{
    Account::setAccount(balance);
    rate = rate_; // Assigns the local value for rate to the data member
}

double SavingsAccount :: calculateInterest()
{
    double interest; // Creating a double variable
    interest = balance * rate; // Calulate the interest in this account
    return interest;
}

SavingsAccount::~SavingsAccount() // Destructor
{}
