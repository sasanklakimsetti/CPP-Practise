#include<iostream>
using namespace std;
void sub(int x, int y)
{
    int result=x-y;
    if(result!=0) cout<<result;
    else
    {
        throw(result);
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        sub(a,b);
    }
    catch(int i)
    {
        cout<<"Exception caught"<<endl;
    }
}