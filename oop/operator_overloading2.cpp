#include<iostream>

using namespace std;

class account
{   public:
    int balance[5];
    
    
    account()
    {
        for (int i=0; i<5; i++) balance[i] = 100 + i;
    }

    int operator[](int index)
    {
        return balance[index];
    }
    
};





int main()
{
     account a;
     int third_member = a[2];
     cout<<third_member;

    

     
    

}