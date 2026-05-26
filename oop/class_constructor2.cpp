#include <iostream>

using namespace std;

class rectangle {
    int height;
    int width;
    public:
    rectangle(int w, int h)
    {
        height = h;
        width = w;
    }
    rectangle(int a)
    {
        height = a;
        width = a;
    }
    rectangle()
    {
        height = 0;
        width = 0;
    }
    ~rectangle()
    {
        cout<<"destruction of rectangle"<<endl;
    }

};

int main()
{   
    rectangle r;
    delete &r;
    rectangle* c = new rectangle(100, 50);
    delete c;
    
    cout<<"this is the last line";
}