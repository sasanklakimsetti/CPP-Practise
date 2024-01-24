#include<iostream>
using namespace std;
class Animal
{
    private:
    string name;
    string voice;
    public:
    Animal(string n, string v):name(n),voice(v){};
    string Name() const
    {
        return name;
    }
    string Voice() const
    {
        return voice;
    }
};
class Dog:protected Animal
{
    string name;
    string voice;
    public:
    Dog(string n, string v):Animal(n,v){};
    void display()
    {
        cout<<"Name: "<<Name()<<endl<<"Voice: "<<Voice()<<endl;
    }
};
int main()
{
    Dog d("Snoopy","Bow Bow!");
    d.display();
    return 0;
}