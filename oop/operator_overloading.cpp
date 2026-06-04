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
        name = "";
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
    account operator+(int money)
    {
        account merged;
        merged.setBalance(balance + money);
        merged.name = name;
        return merged;
    }
    friend bool operator==(account a, account b);
    
};

bool operator==(account a, account b)
    {
       if(a.name == b.name) return true;
       return false;
    }


int main()
{
     account a(500, "Prithy");
     account b(200, "abc");
     if (a == b) cout<<"same";
     else cout<<"different";
    // account c = a+b;
    // account d = a+50;
    
    // //cout<<c.balance;
    // cout<<d.balance;

    //  int x = 10;
    //  int y = 5;
    //  if (x==y && x+y<20) cout<<"same";
}