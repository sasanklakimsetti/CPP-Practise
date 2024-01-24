/*Create a program to store student records. Use dynamic memory allocation to store the details of students, including their name and marks. Allow the user to input the number of students, dynamically allocate memory, and display the details.*/
#include<iostream>
using namespace std;
int main()
{
    int str;
    cout<<"Enter no.of students: ";
    cin>>str;
    int *rec=new int[str];
    string *name;
    name=new string[str];
    int *marks;
    int sub=6;
    marks=new int[sub*str];
    for(int i=0;i<str;i++)
    {
        cout<<"Enter name of student: ";
        cin>>name[i];
        cout<<"Enter marks: ";
        for(int j=0;j<sub;j++)
        {
            cin>>marks[j];
        }
    }
    for(int i=0;i<str;i++)
    {
        cout<<name[i]<<": ";
        for(int j=0;j<sub;j++)
        {
            cout<<marks[j]<<", ";
        }
        cout<<endl;
    }
    delete[] marks;
    delete[] name;
    delete[] rec;
    return 0;
}