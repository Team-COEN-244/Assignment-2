#ifndef Account_h // prevent multiple inclusions of header 
#define Account_h

class Account // Account class definition
{
    private:

    double balance; //  declaring variable

    public: 
    Account (double balance); //constructor
    double getBalance(); 
    void credit (double amount); //Declaring credit function
    void debit  (double amount); //Declaring debit function
    double getBalance();
}

#endif
