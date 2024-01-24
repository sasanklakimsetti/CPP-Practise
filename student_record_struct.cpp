/*Student Record:
Create a structure to represent a student's record with attributes like name, roll number, and marks in different subjects. Implement functions to calculate the average and display the student's details.*/
#include<iostream>
using namespace std;
struct
{
    string name;
    int roll_number;
    int marks[6];
}s;
int main()
{
    cout<<"Enter name of the student: ";
    cin>>s.name;
    cout<<endl<<"Enter roll number: ";
    cin>>s.roll_number;
    cout<<"Enter marks: ";
    for(int i=0;i<6;i++)
    {
        cin>>s.marks[i];
    }
    int sum=0;
    for(int i=0;i<6;i++)
    {
        sum+=s.marks[i];
    }
    cout<<endl<<"Name of the student: "<<s.name;
    cout<<endl<<"Roll Number: "<<s.roll_number;
    cout<<endl<<"Marks: ";
    for(int i=0;i<6;i++)
    {
        cout<<s.marks[i]<<" ";
    }
    cout<<endl<<"Average: "<<sum/6;
}