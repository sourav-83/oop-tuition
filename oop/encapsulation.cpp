// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

class BankAccount {
    private:
    double balance;
    public:
    BankAccount(double money = 0)
    {
        balance = money;
    }
    void deposit(double money);
    
    double getBalance()
    {
        return balance;
    }
    bool isBalanacePrime()
    {
        return false;
    }
};

void BankAccount::deposit(double money)
{   
        if (money > 0)
        {
           balance += money;
        }
        
}