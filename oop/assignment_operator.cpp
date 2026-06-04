#include <iostream>
using namespace std;

int global = 3;

class car {
    
    public:
    car()
    {
        
    }
    car(const car &c)
    {
        cout<<"copy constructor"<<endl;
    }
    void print(int a, int b)
    {
        cout<<a<<" "<<b<<endl;
    }
    void print(int a, int &b)
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
   car bmw;
   // car benz = bmw; //copy-constructor
   car benz;
   benz = bmw; //assignment operator
   // int x = 10, y = 20;
   //bmw.print(x,y);
   
   // x = 2 + 3 * 5;
   
}


