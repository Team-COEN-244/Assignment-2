#ifndef Account_h // prevent multiple inclusions of header 
#define Account_h

class Account // Account class definition
{
    private:

    double balance; //  Declaring variable

    public: 
    Account (double balance); // Constructor
    double getBalance(); // Print the current balance
    void credit (double amount); // Declaring credit function
    void debit  (double amount); // Declaring debit function
}

#endif
