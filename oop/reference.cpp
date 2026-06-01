#include <iostream>

using namespace std;

class A
{   
    public:
    A()
    {
        cout<<"construction"<<endl;
    }
    ~A()
    {
        cout<<"destruction"<<endl;
    }
};

// int& modify(int  &digit)
// {
//     digit = 0;
//     int x = 100;
//     return x;

// }

A function(A &object)
{
    return object;
}



int main()
{
  
    // int digit = 9;
    // modify(digit);
    // cout<<digit;
    A object;
    function(object);

    

}