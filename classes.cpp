//classes and objects

#include<iostream>
using namespace std;
//defining a class vehicle
class vehicle
{
    //---body---
    public:
    //---data member---
    int wheels;
    string name; //data member
    //---member function
    void transportation(string transport) //method
    {
        // 'this' is a pointer which defines an object from which you are calling the data member
        cout<<this->name<<" "<<"will transport "<<transport<<" "<<"and it has "<<wheels<<" wheels"<<endl;
    }
};
int main()
{
    //objects of class
    vehicle bus;
    bus.name="Bus";
    bus.wheels =4;
    bus.transportation("passengers");

    //bike
    vehicle bike;
    bike.wheels = 2;
    bike.name = "Bike";
    bike.transportation("People");
    return 0;
}

// private:
// public:
// protected: