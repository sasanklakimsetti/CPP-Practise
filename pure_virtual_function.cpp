//A pure virtual function is a virtual function which do not contain any definition of the function. Only declaration
//Abstract class: The class which contains pure virtual function
//It is not possible to create object to the abstract class
//We need to create pointer and assign the object to the pointer
#include<iostream>
using namespace std;
class Shape   //It is the abstract class
{
    public:
    virtual void area()=0;  //pure virtual function coz it contains obly declaration and no definition
};
//Circle is derived from Shape. So it needs to provide definition for the pure virtual function
class circle: public Shape
{
    public:
    void area()
    {
        cout<<"Area of circle"<<endl;
    }
};
class square: public Shape
{
    public:
    void area()
    {
        cout<<"Area of square"<<endl;
    }
};
int main()
{
    //We can't create an object to the abstract class but we can create a pointer of the abstract class and store objects of derived classes of abstract class
    Shape *bptr;
    circle c;
    square s;
    bptr=&c;
    bptr->area();
    bptr=&s;
    bptr->area();
    return 0;
}