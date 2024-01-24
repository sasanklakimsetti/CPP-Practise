#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int reg_no;
    string ph;
    public:
    Student(string n, int r, string p);
    ~Student();
    Student(Student &s)
    {
        cout<<"Copy constructor called"<<endl;
        name=s.name;
        reg_no=s.reg_no;
        ph=s.ph;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Reg_no: "<<reg_no<<endl;
        cout<<"Phone: "<<ph<<endl;
    }
};
Student::Student(string n, int r, string p)
    {
        cout<<"Constructor called"<<endl;
        name=n;
        reg_no=r;
        ph=p;
    }
Student :: ~Student()
{
    cout<<"Destructor called"<<endl;
}
int main()
{
    Student s1("Sasank",12209302,"9133931410");
    Student s2(s1);
    Student s3("Karthikeya",123456789,"8919754611");
    s1.display();
    s2.display();
    s3.display();
}