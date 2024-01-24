#include<iostream>
using namespace std;
class Base
{
    public:
    Base(){cout<<"Base Constructor\n";}
    virtual ~Base(){cout<<"Base Destructor\n";}
};
class Derived:public Base
{
    public:
    Derived(){cout<<"Derived Constructor\n";}
    ~Derived(){cout<<"Derived destructor\n";}
};
int main()
{
    Base* base=new Base();
    delete base;
    cout<<"...............\n";
    Derived *derived = new Derived();
    delete derived;
    cout<<".........\n";
    Base *poly = new Derived(); //base and derived constructor will be called but derived constructor won't be called and it causes memory leak. i.e. we are allocating memory for the derived class but not deallocating.
    //to avoid this issue, we need to  use virtual destructor  so that there won't be any issue and compiler doesn't confuse and deallocate memory when we store instance of derived class in base class pointer.
    delete poly;
}