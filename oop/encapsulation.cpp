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
    void deposit(double balance)
    {
        this->balance += balance;
        //this->getBalance();
    }
    
    double getBalance()
    {
        return balance;
    }

};

// void BankAccount::deposit(double money)
// {   
//         if (money > 0)
//         {
//            balance += money;
//         }
        
// }

int main()
{

}