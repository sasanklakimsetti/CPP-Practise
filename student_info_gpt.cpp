/*Create a Student class with attributes like name, age, and a list of courses. Implement methods to add a course, drop a course, and calculate the student's GPA*/
#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    string f_name;
    string m_name;
    int age;
    int reg_no;
    char mobile[10];
    char branch[3];
    void details(string name,string f_name,string m_name,int age,int reg_no,char mobile[],char branch[])
    {
        cout<<endl<<"Name of the student: "<<name<<endl<<"Father Name: "<<f_name<<endl<<"Mother Name: "<<m_name<<endl<<"Age: "<<age<<endl<<"Registration Number: "<<reg_no<<endl;
        cout<<"Mobile Number: ";
        for(int i=0;i<10;++i)
        {
            cout<<mobile[i];
        }
        cout<<endl<<"Branch: ";
        for(int i=0;i<3;++i)
        {
            cout<<branch[i];
        }
    }
};
int main()
{
    Student info;
    cout<<"Enter the name of the student: ";
    cin>>info.name;
    cout<<endl<<"Enter father name: ";
    cin>>info.f_name;
    cout<<endl<<"Enter mother name: ";
    cin>>info.m_name;
    cout<<endl<<"Enter age: ";
    cin>>info.age;
    cout<<endl<<"Enter registration number: ";
    cin>>info.reg_no;
    cout<<endl<<"Enter mobile number: ";
    for(int i=0;i<10;++i)
    {
        cin>>info.mobile[i];
    }
    cout<<endl<<"Enter the branch: ";
    for(int i=0;i<3;++i)
    {
        cin>>info.branch[i];
    }
    info.details(info.name,info.f_name,info.m_name,info.age,info.reg_no,info.mobile,info.branch);
}