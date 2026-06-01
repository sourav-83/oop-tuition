#include <iostream>

using namespace std;

class A
{
public:
    int a;
    A(int n) { a = n; }
};


class BankAccount
{
private:
    double *balance;

public:
    BankAccount(double money = 0)
    {
        *balance = money;
    }
    void deposit(double money)
    {
        *balance = *balance + money;
    }

    double getBalance()
    {
        return *balance;
    }
};

BankAccount function(BankAccount account)
{
    account.deposit(100);
    return account;
}

int main()
{
    BankAccount account(1000);
    BankAccount modified_account = function(account);
    cout << modified_account.getBalance() << endl;


    A first(-1);
    A ob[2] = {first, A(-2)};

    A ob2[2][2] = {A(-1), A(-2), A(-3), A(-4)};
}
