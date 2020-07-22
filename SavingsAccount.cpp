#include <iostream> 
#include "SavingsAccount.h" // include definition of class SavingsAccount from SavingsAccount.h

using namespace std;

class CheckingAccount : public Account // creating a checking account, derived from Account class
{
    public:
    
    CheckingAccount(doucle balance, doucle tax); // constructor

    void credit(double amount);
    
    void debit(double amount);

    private:

    double tax;
};

#endif