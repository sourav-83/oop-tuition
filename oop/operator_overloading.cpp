#include<iostream>

using namespace std;

class account
{   public:
    int balance;
    string name;
    
    account(int x, string n)
    {
        balance = x;
        name = n;
    }
    account()
    {
        balance = 0;
        name = ""
    }
    void setBalance(int x)
    {
        balance = x;
    }
    account operator+(account a)
    {
        account merged;
        merged.setBalance(balance + a.balance);
        merged.name = name;
        return merged;
    }
};


int main()
{
    account a(500, "Prithy");
    account b(200, "student");
    account c = a+b;
    account d = a+50;
    
    //cout<<c.balance;
    cout<<d.balance;
}