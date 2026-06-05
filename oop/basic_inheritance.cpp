#include <bits/stdc++.h>

using namespace std;

class vehicle 
{   
    
    public:
    int price;
    vehicle(int price)
    {   
        this->price = price;
        cout<<"vehicle constructor"<<endl;
    }
    void travel()
    {
        cout<<"travelling"<<endl;
    }
    int getPrice()
    {
        return price;
    }
    void setPrice(int price)
    {
        this->price = price;
    }
    ~vehicle()
    {
        cout<<"vehicle destructor"<<endl;
    }

};

class bus: public vehicle {

    public:
    int discount;
    bus(int p): vehicle(p)
    {   
        discount = p/10;
        cout<<"bus constructor"<<endl;
    }
    bus(int price, int discount): vehicle(price)
    {   
        this->discount = discount;
        cout<<"bus constructor"<<endl;
    }
    bus(): vehicle(100)
    {   
    
        cout<<"bus constructor"<<endl;
    }
    void travel()
    {
        cout<<"travelling by bus"<<endl;
    }
    ~bus()
    {
        cout<<"bus destructor"<<endl;
    }

};

class speedboat: public vehicle {
    
    public:
    int getPrice()
    {
        return price + 100;
    }
    
};

int main()
{
    //vehicle v;
    bus b;
    cout<<b.price<<endl;
    // b.travel();
}
