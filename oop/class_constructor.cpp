#include <iostream>
using namespace std;

class car {
    string company;
    string name;
    int year;
    float price;
    public:
    car(string c, string n, float p, int y = 2026)
    {
        company = c;
        n = name;
        year = y;
        price = p;
    }
    int getYear()
    {
        return year;
    }
    void setCompany(string c)
    {
        company = c;
    }
    string getComapny()
    {
        return company;
    }
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
    int getPrice()
    {
        return price;
    }
    int getPrice(int discount)
    {
        return price - discount;
    }
    int getPrice(int discount1, int discount2)
    {
        return price - discount1 - discount2;
    }
    int getPrice(float discount)
    {
        return price - discount;
    }
};

int main()
{
   car my_car("bmw", "elite", 50000);
  
   //my_car.company = "Audi";
    //my_car.display();
//    if (my_car.is_recent())
//    {
//     cout<<"recent car";
//    }

    //cout<<my_car.getYear();
    
    cout<<my_car.getPrice(1000)<<endl;
    //cout<<my_car.getPrice(1000, 500)<<endl;
    //cout<<my_car.getPrice()<<endl;
    //cout<<my_car.getPrice(100, 500, 300)<<endl;
    float discount = 100.5;
    cout<<my_car.getPrice(discount)<<endl;
    
    // this is a comment
    /*
    this
    is 
    a comment
    */
    string name = "Prithy";
    char array[100] = "name";

}


