#include <bits/stdc++.h>

using namespace std;


class Rectangle {

protected:
int width, length;

public:

void set_width(int w) {width=w;}
void set_length(int l) {length=l;}
int area() {return (width*length);}

};



class Box: public Rectangle {

int height;

public:

void set_height (int h){height=h;}
//int volume () {return (area()*height);}

/*private members of the base class cannot be accessed by the derived class*/

int volume () {return (width*length*height);}

};

class colourfulBox: private Box {
    string colour;
    public:
    int f()
    {
        return length;
    }
};

class redBox: private colourfulBox {
    
    public:
    int f()
    {
        return length;
    }
};



int main()
{

}
