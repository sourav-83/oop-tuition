#include <bits/stdc++.h>

using namespace std;

class toy
{
    public:
    int price;
    string name;
    toy(int p)
    {
        price = p;
    }
    toy()
    {
        price = 0;
    }
};

template <class X> void swapargs(X &a, X &b)
{
X temp;
temp = a;
a = b;
b = temp;
}

template <class type1, class type2>
void print(type1 x, type2 y)
{
cout << x << ' ' << y << '\n';
}

// void swap(int &a, int &b)
// {
//     int c = a;
//     a = b;
//     b = c;
    
// }

// void swap(char &a, char &b)
// {
//     char c = a;
//     a = b;
//     b = c;
    
// }

int main()
{
    // char a = 'x';
    // char b = 'y';
    // swapargs(a,b);
    // cout<<a<<endl;

    //print('a','b');

    toy a(100);
    toy b(50);
    swapargs(a,b);
    cout<<a.price;
}



