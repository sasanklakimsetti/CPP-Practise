#include<iostream>
using namespace std;
class MyClass
{
    public:
    int num;
    MyClass(int n)
    {
        num=n;
    }
    MyClass(const MyClass& other)
    {
        num=other.num*2;
    }
};
int main()
{
    MyClass obj;
    cout<<obj.num;
    return 0;
}