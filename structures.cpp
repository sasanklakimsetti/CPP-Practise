//STRUCTURE : COLLECTION OF HETEROGENEOUS VARIABLES

#include<iostream>
using namespace std;

struct Student
{
    char name[50];
    int roll;
    char dept[50];
    int doj;
    int marks;
};
int main()
{
    Student Sasank;
    int n,i;
    cout<<"Enter size of name of the student: ";
    cin>>n;
    cout<<endl<<"Enter Name of the student: ";
    for(i=0;i<n;i++)
    {
        cin>>Sasank.name[i];
    }
    cout<<endl<<"Enter Roll no. of the student: ";
    cin>>Sasank.roll;
    cout<<endl<<"Enter size of department:";
    int dept_n;
    cin>>dept_n;
    cout<<endl<<"Enter name of department: ";
    for(i=0;i<dept_n;i++)
    {
        cin>>Sasank.dept[i];
    }
    cout<<endl<<"Enter Date of joining: ";
    cin>>Sasank.doj;
    cout<<endl<<"Enter total marks: ";
    cin>>Sasank.marks;
    cout<<endl<<"Name of the student: ";
    for(i=0;i<n;i++)
    {
        cout<<Sasank.name[i];
    }
    cout<<endl<<"Roll No: "<<Sasank.roll<<endl<<"Department: ";
    for(i=0;i<dept_n;i++)
    {
        cout<<Sasank.dept[i];
    }
    cout<<endl<<"Date of Joining: "<<Sasank.doj;
    cout<<endl<<"Marks: "<<Sasank.marks;
}