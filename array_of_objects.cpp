#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int reg_no;
    public:
    void getData()
    {
        cout<<"Enter name: ";cin>>name;
        cout<<"Enter reg_no: ";cin>>reg_no;
    }
    void putdata()
    {
        cout<<name<<endl<<reg_no<<endl;
    }
};
int main()
{
    Student s[5];
    for(int i=0;i<5;i++)
    {
        s[i].getData();
    }
    for(int i=0;i<5;i++)
    {
        s[i].putdata();
    }
}