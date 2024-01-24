#include<iostream>
using namespace std;
int main()
{
    string str="Sasank Lakimsetti";
    cout<<"The string is "<<str<<endl;
    str.resize(6);
    cout<<"String after resizing: "<<str<<endl;
    cout<<"The capacity of string is "<<str.capacity()<<endl;
    cout<<"The length of the string is "<<str.length()<<endl;
    str.shrink_to_fit();
    cout<<"The string capacity after shrinking: "<<str.capacity()<<endl;
}