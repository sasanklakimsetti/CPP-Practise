#include<iostream>
using namespace std;
class Person
{
    private:
    string name;
    int age;
    public:
    Person(string n, int a):name(n),age(a){};
    string Name() const
    {
        return name;
    }
    int Age() const
    {
        return age;
    }
};
class Student : public Person
{
    public:
    Student(string na, int ag) : Person(na,ag){};
    void display() const
    {
        cout<<Name()<<endl<<Age()<<endl;
    }
};
int main()
{
    Student s("Sasank",18);
    s.display();
    return 0;
}