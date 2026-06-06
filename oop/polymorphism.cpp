#include <bits/stdc++.h>

using namespace std;

// abstract class because animal contains pure virtual function

class animal
{   
    public:
    // virtual animal()
    // {

    // }
    virtual void speak() = 0;
    
    virtual ~animal()
    {
        cout<<"animal destructor"<<endl;
    }

};

class cat: public animal {
    
    public:
    // void speak()
    // {
    //     cout<<"meow"<<endl;
    // }
    void nap()
    {
        cout<<"napping"<<endl;
    }
    ~cat()
    {
        cout<<"cat destructor"<<endl;
    }

};

class persian:public cat{
    public:
    void speak()
    {
        cout<<"persian meow"<<endl;
    }

};

int main()
{
    // animal a;
    // cat c;
    // a = c;
    // a.speak();
    // a.nap();



    // animal a;
    // cat c;
    // c = a;
    // c.speak();
    


    // cat c;
    // animal * a = &c;
    // a->speak();
    // persian p;
    // a = &p;
    // a->speak();
    // a->nap();

    // int a = 0;
    // int b = 30/a;
    // cout<<b;

    // animal * a = new cat;
    // a->speak();
    // delete a;


    // animal a;
    // a.speak();


    persian p;
    


}