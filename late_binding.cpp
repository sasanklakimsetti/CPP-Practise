#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"Base constructor"<<endl;
    }
    ~Base()
    {
        cout<<"Base destructor"<<endl;
    }
    virtual void show()
    {
        cout<<"In base"<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"Derived constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"Derived destructor"<<endl;
    }
    void show()
    {
        cout<<"In derived"<<endl;
    }
};
int main()
{
    Derived d1;
    Base *bptr;
    bptr=&d1;
    bptr->show();
    return 0;
}