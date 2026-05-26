#include <iostream>

using namespace std;


bool even_check(int number)
{
    if (number%2==0) return true;
    return false;
}

int main() 
{
    // int number;
    // cin>>number;
    // cout<<number;
    // cout<<endl;
    // string str;
    // cin>>str;
    // cout<<str;

    // int temperatures[10];
    // for (int i=0; i<10; i++)
    // {
    //     cin>>temperatures[i];
    //     cout<<temperatures[i]<<endl;
    // }

    int number;
    cout<<"Please Enter the number: ";
    cin>>number;
    if (even_check(number) == true)
    {
        cout<<"The number is even";
    }
    else 
    {
        cout<<"The number is odd";
    }


}