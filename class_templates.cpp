#include<iostream>
using namespace std;
template<class T>

class Addition
{
    public:
    T addition(T n1, T n2)
    {
        T result=n1+n2;
        return result;
    }
};
template<class U>
class Sub
{
    public:
    U subtraction(U n1, U n2)
    {
        U result=n1-n2;
        return result;
    }
};
int main()
{
    Addition<int>obj1;
    Addition<long>obj2;
    int a=1,b=2,c;
    c=obj1.addition(a,b);
    long d=3,e=4,f;
    f=obj2.addition(d,e);
    cout<<c<<endl<<f<<endl;
    Sub<int>obj3;
    Sub<float>obj4;
    int g;
    float h=3.0,i=5.0,j;
    g=obj3.subtraction(a,b);
    j=obj4.subtraction(h,i);
    cout<<g<<endl<<j<<endl;
    Addition<char>obj5;
    int k='A',l='B',m;
    m=obj5.addition(k,l);
    cout<<m<<endl;
}