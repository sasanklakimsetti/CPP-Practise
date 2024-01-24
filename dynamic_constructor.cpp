#include<iostream>
using namespace std;
class Base
{
    public:
    int *p;
    Base()
    {
        p=new int;
        *p=1;
        cout<<*p<<endl;
    }
};
int main()
{
    Base *bptr=new Base;
}