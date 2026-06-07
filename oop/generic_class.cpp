#include <bits/stdc++.h>

using namespace std;

template <typename type>class toy{

    public:
    type price;
    toy(type price)
    {
        this->price = price;
    }

};


int main()
{
    toy<double> t1(99.999);
    cout<<t1.price<<endl;
}







