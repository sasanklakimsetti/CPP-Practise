#include<iostream>
using namespace std;
class Engine
{
    string name;
    public:
    Engine(string n):name(n){};
    string getEngine() const
    {
        return name;
    }
};
class Body
{
    string name;
    public:
    Body(string n):name(n){};
    string getBody() const
    {
        return name;
    }
};
class Car:public Engine, public Body
{
    string engine;
    string body;
    public:
    Car(string engine, string body):Engine(engine),Body(body){};
    void getCar()
    {
        cout<<"Engine: "<<getEngine()<<endl<<"Body:"<<getBody()<<endl;
    }
};
int main()
{
    Car c("V6","Titanium");
    c.getCar();
    return 0;
}