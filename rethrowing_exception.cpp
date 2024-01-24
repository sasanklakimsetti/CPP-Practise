#include<iostream>
using namespace std;
void division(int x, int y)
{
    cout<<"Inside division func()"<<endl;
    try
    {
        if(y==0) throw(y);
        else cout<<x/y;
    }
    catch(int i)
    {
        cout<<"Expection caught in div function"<<endl;
        throw;
    }
}
int main()
{
    cout<<"Inside main function"<<endl;
    try
    {
        division(1,1);
        division(1,0);
    }
    catch(int i)
    {
        cout<<"Exception caught inside main function"<<endl;
    }
}