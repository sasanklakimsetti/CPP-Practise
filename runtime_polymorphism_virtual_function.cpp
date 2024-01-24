//Virtual funtion: another way for implementng runtime polymorphism in cpp
//It can be defined as the member function of base class and is redefined in the derived class.
//It is declared with keyword 'virtual'.


#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void print()
    {
        cout<<"This is the function of base class"<<endl;
    }
};
class derived: public Base
{
    public:
    void print()
    {
        cout<<"This is the function of derived class"<<endl;
    }
};
int main()
{
    Base* b;
    derived d;
    b=&d;
    b->print();  //derived class function will be called as we have used virtual function in base class. If we do without virtual function, it will call the print() function of base class though the instance of b pointing to instance of derived class
    return 0;
}