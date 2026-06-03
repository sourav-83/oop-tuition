#include<iostream>
using namespace std;
class Book
{
public :
    int isbn;
    string name;
    float price;
    int page;
    Book ()
    {
        name="";
        price=0;
        page=0;
        this->isbn=0;

    }
    Book (string n,float p,int pg, int isbn)
    {
        name=n;
        price=p;
        page=pg;
        this->isbn=isbn;

    }
    void updatePrice (float price)
    {
       this->price = price;   
    }
};
class library
{
public :
    Book  array[1000];
    int count=0;
   
    bool addBook (Book b)
    {
       if(count==1000)
       {
        cout<<"insufficient space"<<endl;
        return false;
       }
       array[count] = b;
       count++;
       return true; 
    }
    
    void deletebook (Book b)
    {
        for (int i=0; i<count; i++)
        {
           if (b.isbn == array[i].isbn) 
           {
             for (int j=i; j<count-1; j++)
             {
                array[j] = array[j+1];
             }
             count--;

           }
        }

    }
    float totalPrice ()
    {
        float sum = 0.0;
        for (int i=0; i<count; i++) sum += array[i].price;
        return sum;
    }
    void display()
    {  
       if (count == 0) 
       {
        cout<<"No available books :("<<endl;
        return;
       }
       cout<<"The available books are: "<<endl;
       for (int i=0; i<count; i++) cout<<array[i].name<<endl;
    }


};

int main ()
{
    Book war("war", 100, 200, 1757);
    Book peace("peace", 150, 250, 2083);
    Book philosophy("philosophy", 2000, 2500, 6776);
    library lib;
    lib.addBook(war);
    lib.addBook(peace);
    lib.addBook(philosophy);
    lib.display();
    war.updatePrice(99);
    lib.deletebook(peace);
    lib.display();
    cout<<"price of war: "<<war.price;

}
    







