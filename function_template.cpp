#include<iostream>
#include<iomanip>
using namespace std;
template <class T>
T add (T &n1,T& n2)
{
    return n1+n2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int f=add(a,b);
    cout<<fixed<<setprecision(2)<<f<<endl;
    float c,d;
    cin>>c>>d;
    float e=add(c,d);
    cout<<e<<endl;
    char g='A',h='i';
    char i=add(g,h);
    cout<<static_cast<char>(i)<<endl;
    return 0;
}