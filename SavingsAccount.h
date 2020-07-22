#ifndef SavingsAccount_H //prevent multiple inclusions of header 
#define SavingAccount_H
#include "Account.h" //include definition of class Account from Account.h

class SavingsAccount : publi Account // SavingsAccount class definition
{
    private:
    double rate;

    public:
    SavingsAccount(double balance, double rate); //constructor 
    double calculateInterest();
};
#endif

