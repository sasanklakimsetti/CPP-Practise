/*
Function Overloading:

*same function name but difference in data types of parameters or difference in number of parameters
*It is a type of compile time polymorphism
*When there are multiple functions with the same name but different parameters, then the function are said to be overloaded, hence this is known as Function overloading
*Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name.
*There are certainn rules of function overloading that should be followed while overloading a function.
*/
#include<iostream>
using namespace std;
//function with one argument
void display_func(int a)
{
    cout<<"a = "<<a<<endl;
}
//function with two arguments
void display_func(int a, int b)
{
    cout<<"a = "<<a<<" and b = "<<b<<endl;
}
//Function with different parameter data types
void display_func(int a, char b, float c)
{
    cout<<"a = "<<a<<" and b = "<<b<<" and c = "<<c<<endl;
}
int main()
{
    display_func(5);
    display_func(10,0);
    display_func(10,'a',5.0);
    return 0;
}