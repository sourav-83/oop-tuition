#include<bits/stdc++.h>

using namespace std;

class faculty
{  
   public:
   string subject;
   faculty(string sub)
   {
    subject = sub;
    cout<<"faculty creation"<<endl;
   }
};

class administrator
{  
   public:
   string role;
   administrator(string role)
   {
    this->role = role;
    cout<<"administrator creation"<<endl;
   }
};

class vc: public faculty, private administrator
{  
   public:
   int salary;
   vc(string subject, int salary): faculty(subject), administrator("vice-chancellor")
   {
     this->salary = salary;
     cout<<"vc creation"<<endl;
   }
};

int main()
{
  vc rahman("cse", 100000);
}


