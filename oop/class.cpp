#include <iostream>
using namespace std;

class car {
    string company;
    public:
    string name;
    int year;
    float price;
    void display()
    {
        cout<<"Car details: "<<endl;
        cout<<name<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"price: "<<price<<endl;
    }
    bool is_recent()
    {
       if (year>=2020) return true;
       return false;
    }
};

int main()
{
   car my_car;
   my_car.name = "premio";
   my_car.year = 2021;
   my_car.price = 1000000;
   //my_car.company = "Audi";
   my_car.display();
   if (my_car.is_recent())
   {
    cout<<"recent car";
   }
}
