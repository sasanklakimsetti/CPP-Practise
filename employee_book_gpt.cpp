/*Employee Information:
Define a structure for employee information, including name, employee ID, position, and salary. Write a program to input and display the details of multiple employees.*/
#include<iostream>
using namespace std;
struct
{
    string name;
    string emp_id;
    string position;
    int salary;
}emp;
int main()
{
    int n;
    cout<<"Enter number of employees: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of the employee "<<i+1<<": ";
        cin>>emp.name;
        cout<<endl<<"Enter employee id: ";
        cin>>emp.emp_id;
        cout<<endl<<"Enter position: ";
        cin>>emp.position;
        cout<<endl<<"Enter salary: ";
        cin>>emp.salary;
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Emplyee "<<i+1<<": "<<"Name: "<<emp.name<<endl<<"Employee id: "<<emp.emp_id<<endl<<"Position: "<<emp.position<<endl<<"Salary: "<<emp.salary<<endl;
    }
}