#include<iostream>

using namespace std;

class MyClass
{

public:
void print(int i)
{
    cout<<"integer: "<<i<<endl;
}
void print(float i)
{
    cout<<"float: "<<i<<endl;
}
};





int main()
{
MyClass o1;
o1.print(10);
}