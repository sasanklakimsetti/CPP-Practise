#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"Base class function"<<endl;
    }
};
class Derived:public Base
{
    public:
    void display()
    {
        cout<<"Derived class function"<<endl;
    }
};
int main()
{
    Derived d1;
    Base *bptr=&d1;
    bptr->display();
    return 0;
}