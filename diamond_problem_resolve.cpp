/*
Dealing with ambiguity:

There might be a chance that parent class and derived class have same function with same names i.e. class A has function display() and class B has function display(). this will be a confusion to the compiler that which function belongs to which class.

To resolve this, we need to use scope resolution while calling the function.

A::display()   --> signifies that the function belongs to class A
B::display()   --> signifies that the function belongs to class B
*/
/*
Diamond problem:  base-->class1;base-->class2;class1, class2-->derived
class1 and class2 will also have x in it as they both were derived from base and derived class will have all three classes properties.
when initiaize an instance of dervied class and assign the value, the compiler will confuse which x is it and show ambiguity error. 
so we need to use scope resolution for x 
*/
#include<iostream>
using namespace std;
class baseClass
{
    public:
    int x;
};
class class1:public baseClass
{
    public:
    int y;
};
class class2:public baseClass
{
    public:
    int z;
};
class derived_class:public class1,public class2
{
    public:
    int sum;
};
int main()
{
    derived_class obj;
    obj.class1::x=10;   //need to use scope resolution, otherwise will show ambiguity
    obj.y=20;
    obj.z=30;
    obj.sum=obj.class1::x+obj.y+obj.z;
    cout<<obj.sum;
}