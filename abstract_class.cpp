//Abstract class: the class which has pure virtual function.
//Pure virtual function needs to be called in base class and it will become abstract class
//This will be useful for derived classes to use the functions of base class and all will be stored in the same class and represent same class
#include<iostream>
using namespace std;
//Abstract class
class Database
{
    public:
    virtual void getname()=0;  
};
class Manager:public Database
{
    public:
    void getname()
    {
        cout<<"This is manager class\n";
    }
};
class Employee:public Database
{
    public:
    void getname()
    {
        cout<<"This is employee class\n";
    }
};
class Customer:public Database
{
    public:
    void getname()
    {
        cout<<"This  is Customer class\n";
    }
};
int main()
{
    //we cannot create an instance or object for abstract class. we can only point to the derived classes of the base class using pointer
    //if we create object to abstract class, it will show you an error
    Database *db;
    Manager m;
    //m.getname();
    db=&m;
    db->getname(); //the pointer of base class will call the function in derived class
    Employee em;
    db=&em;
    //em.getname();
    db->getname();
    Customer c;
    db=&c;
    //c.getname();
    db->getname();
}