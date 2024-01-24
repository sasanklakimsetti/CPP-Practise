#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        if(b!=0) cout<<a/b<<endl;
        else throw(b);
    }
    catch(int i)
    {
        cout<<"Division by zero not possible"<<endl;
    }
    cout<<a+b<<endl;
}