#include <iostream>

using namespace std;

class rectangle {
    public:
    int height;
    int width;
    
    rectangle()
    {
        height = 0;
        width = 0;
    }
    int area()
    {
        return height * width;
    }

};

int main()
{
    rectangle r;
    r.height = 10;
    r.width = 5;
    // cout<<r.area()<<endl;
    // int* p = new int(5);
    // cout<<*p<<endl;
    // rectangle* pointer;
    // pointer = new rectangle;
    // pointer->height = 10;
    // cout<<pointer->height<<endl;
    rectangle c;
    c = r;
    r.width = 1000;
    cout<<c.width<<endl;


    
} 
    
    
  