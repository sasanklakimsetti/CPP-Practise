#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<< a+b<<endl;
}
void add(double a, double b,double c)
{
    cout<<a+b+c<<endl;
}
void add(char a, char b)
{
    cout<<a+b<<endl;
}
int main()
{
    add(1,2);
    add(1.0,2.0,3.2);
    add('c','d');
}