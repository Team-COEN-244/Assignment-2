#ifndef SavingsAccount_H //prevent multiple inclusions of header 
#define SavingAccount_H
#include "Account.h" //include definition of class Account from Account.h

class SavingsAccount : public Account // SavingsAccount class definition
{
    double rate; // Declaring member rate correspoding to the interest rate

public:

    SavingsAccount(double&, double&); // Constructor with known variabes
    double calculateInterest(); // Calculate the interest of the Account
};
#endif
