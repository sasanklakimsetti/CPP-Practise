//Acquiring properties of parent/base class by derived/child class
//decrease in chance of error and data redundancy
//syntax: class <derived_class_name> : <access_specifier> <base_class_name> {//body}
//access_specifier: protected/public/private
//Note: A derived class doesn't inherit access to private data members. However, it does inherit a full parent object, which contains any private members which that class declares.
/*
When a base class is privately inherited by the derived class, public members of the
base class becomes the private members of the derived class and therefore, the
public members of the base class can only be accessed by the member functions of
the derived class.
They are inaccessible to the objects of the derived class.
On the other hand, when the base class is publicly inherited by the derived class,
public members of the base class also become the public members of the derived
class.
Therefore, the public members of the base class are accessible by the objects of the
derived class as well as by the member functions of the derived class.
*/
/*
example:
class shape
{
};
class Triangle:private shape
{
};
*/
#include<iostream>
using namespace std;
class A
{
    public:  //available everywhere
    int x;
    protected: //available only in derived class
    int y;
    private: //available only in base class
    int z;
};
class B:public A
{
    //x is public
    //y is protected
    //z is not accessible from B i.e. private
};
class C:protected A
{
    //x is protected
    //y is protected
    //z is not accessible from C i.e. private
};
class D:private A
{
    //x is private
    //y is private
    //z is not accessible from D i.e. private
};

