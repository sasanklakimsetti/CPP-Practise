//Order of constructor : base classes to derived clases
//order of destructor: derived classes to base classes
//you can refer to the output of this code
#include<iostream>
using namespace std;
class baseClass1
{
    public:
    baseClass1()
    {
        cout<<"Base class1 constructor called"<<endl;
    }
    ~baseClass1()
    {
        cout<<"Base class1 destructor called"<<endl;
    }
};
class baseClass2
{
    public:
    baseClass2()
    {
        cout<<"Base class2 constructor called"<<endl;
    }
    ~baseClass2()
    {
        cout<<"Base class2 destructor called"<<endl;
    }
};
class derivedClass:public baseClass1,public baseClass2
{
    public:
    derivedClass()
    {
        cout<<"Derived class constructor called"<<endl;
    }
    ~derivedClass()
    {
        cout<<"Derived class destructor called"<<endl;
    }
};
int main()
{
    derivedClass dc;
}