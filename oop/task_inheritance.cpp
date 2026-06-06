/*
motor - 
string model
constructor
destructor
motor_start function
motor_end function


engine -
int horse_power
constructor
destructor
engine_start function
engine_end funstion

car -
price
license_plate string
constructor
destructor
start
{
motor_start()
engine_start()
}
end
{
engine_end()
motor_end()
}

getter, setter for every class


*/

#include <iostream>
using namespace std;
class motor
{
public :
    string model;
    motor (string m)
    {
        model=m;
        cout << "motor constructor "<<endl;
    }
    string getModel ()
    {
        return model;
    }
    void setModel (string m)
    {
        model=m;
    }
    void motor_start ()
    {
        cout<<"motor started "<<endl;
    }
    void motor_end ()
    {
        cout<<"motor stopped"<<endl;
    }

    ~motor ()
    {
        cout<<"motor destructor"<<endl;
    }

};

class engine
{
public :
    int horse_power;
    engine (int horse_power)
    {
        this->horse_power=horse_power;
        cout<<"engine constructor"<<endl;

    }
    int getHorsepower ()
    {
        return horse_power;
    }
    void setHorsePower(int hp)
    {
        horse_power = hp;
    }
    void engine_start ()
    {
        cout<<"engine started "<<endl;
    }
    void engine_end ()
    {
        cout<<"engine stopped"<<endl;
    }
    ~engine ()
    {
        cout<<"engine destructor"<<endl;

    }

};

class car : public motor , public engine {
public :
    int price ;
    string  license_plate;
    car (string model,int horse_power,int price ,string license_plate ) : motor (model),engine (horse_power){
    this->price=price;
    this->license_plate =license_plate ;
    cout<<"car constructor"<<endl;
    }
    int getPrice()
    {
        return price;
    }

    string getLicensePlate()
    {
        return license_plate;
    }


    int setPrice(int p)
    {
        price = p;
    }

    void setLicensePlate(string plate)
    {
        license_plate = plate;
    }

    ~car()
    {
        cout << "car Destructor" << endl;
    }
    void motor_start ()
    {
        cout<<"motor started via car"<<endl;
    }
    
  
    void start()
    {   
        motor_start();
        engine_start();
        cout<<"car started"<<endl;
    }

    void end()
    {
        engine_end();
        motor_end();
        cout<<"car ended"<<endl;
    }

};

int main () {
car  c ("toyota",2500000,100000,"dhaka1213");
cout<<"car model :"<<c.getModel()<<endl;
cout<<"car horse_power :"<<c.getHorsepower()<<endl;
cout<<"car price :"<<c.getPrice()<<endl;
cout<<"car licensePlate :"<<c.getLicensePlate()<<endl;
c.start();
c.end();
}
