#include<iostream>
using namespace std;
class Parent
{
    public:
    void print()
    {
        cout<<"this is function of parent class"<<endl;
    }
};
class Child: public Parent
{
    public:
    void print()
    {
        cout<<"This is function of child class"<<endl;
    }
};
int main()
{
    Parent* p;
    Child c;
    p=&c;
    p->print();  //will call the print() function in parent class though it stores the address of instance of  child class. So we need to use virtual function to avoid it.
    c.print();  //function overloading takes place
}