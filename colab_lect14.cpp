#include<iostream>
using namespace std;
class MyClass
{
    public:
    int data=5;
    void printData(int d)
    {
        cout<<d;
    }
    void printDataFromMember()
    {
        cout<<data;
    }
};
int main()
{
    MyClass obj;
    obj.printData(10);
    obj.printDataFromMember();
    return 0;
}