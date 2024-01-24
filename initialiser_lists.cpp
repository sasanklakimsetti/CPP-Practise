#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student
{
    int id;
    public:
    Student(int i=0) : id(i){};
    ~Student()
    {
        cout<<"Destructor called"<<endl;
    }
    void display()
    {
        cout<<"Id: "<<id<<endl;
    }
};
int main()
{
    Student s1(1);
    Student s2(12);
    s1.display();
    s2.display();
}