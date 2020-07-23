#ifndef CheckinAccount_H // prevent multiple inclusion of header 
#define CheckingAccount_H
#include "Account.h"

class CheckingAccount : public Account
{
    double tax;

public:

    CheckingAccount(double&, double&); // Constructor
    virtual void credit(double&);
    virtual bool debit(double&);
};

#endif
