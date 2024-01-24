/*
Runtime Polymorphism: 

*Runtime polymorphism also referred to as dynamic polymorphism is usually achieved by function overriding.
*Function overriding occurs when a derived class has a definition for one of the member functions of the base class.
*The base function is said to be overridden.
*/

#include<iostream>
using namespace std;
class Parent
{
    public:
    void message()
    {
        cout<<"Hello there!";
    }
};
class child: public Parent
{
    public:
    void message()
    {
        cout<<"Nice to meet you!";
    }
};
//function message() has different definition in parent class and child class
//This is function overriding
int main()
{
    Parent p;
    p.message();
    child c;
    c.message();
}