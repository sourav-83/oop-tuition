#include <iostream>
using namespace std;
class Rectangle
{

    int width, length;

public:
    void set_width(int w) { width = w; }
    void set_length(int l) { length = l; }
    int area() { return (width * length); }
};

class Box : public Rectangle
{

    int height;

public:
    
    void set_height(int h) { height = h; }
    int volume() { return (area() * height); }

    /*private members of the base class cannot be accessed by the derived
    class*/

    // int volume () {return (width*length*height);}
};

int main()
{
    Rectangle rect;
    //rect.height = 100;
    //rect.length = 100;
    Box box;
    rect.set_width(3);
    rect.set_length(4);
    box.set_width(4);  // inherited
    box.set_length(4); // inherited
    box.set_height(5);
    cout <<"Rectangle area :"<< rect.area() << endl;
    cout << "Box base area : base area :"<< box.area() << endl; // inherited
    cout <<"Box volume :"<< box.volume() << endl;
    return 0;
}