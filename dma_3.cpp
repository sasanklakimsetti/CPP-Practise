#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Size of string: ";
    cin>>size;
    char *c=new char[size];
    for(int i=0;i<size;i++)
    {
        cin>>c[i];
    }
    cout<<"Original string is: ";
    for(int i=0;i<size;i++)
    {
        cout<<c[i];
    }
    cout<<endl;
    char *r=new char[size];
    for(int i=0;i<size;i++)
    {
        r[i]=c[size-1-i];
    }
    cout<<"The reversed string is: ";
    for(int i=0;i<size;i++)
    {
        cout<<r[i];
    }
    cout<<endl;
    delete[] r;
    delete[] c;
    return 0;
}