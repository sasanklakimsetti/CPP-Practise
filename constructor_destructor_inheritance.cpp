#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"Vehicle constructor called"<<endl;
    }
    ~Vehicle()
    {
        cout<<"Vehicle destructor called"<<endl;
    }
};
class Car:public Vehicle
{
    public:
    Car()
    {
        cout<<"Car constructor called"<<endl;
    }
    ~Car()
    {
        cout<<"Car destructor called"<<endl;
    }
};
class Bicycle : public Vehicle
{
    public:
    Bicycle()
    {
        cout<<"Bicycle constructor called"<<endl;
    }
    ~Bicycle()
    {
        cout<<"Bicycle destructor called"<<endl;
    }
};
int main()
{
    Vehicle v;
    Car c1;
    Bicycle b1;
    return 0;
}