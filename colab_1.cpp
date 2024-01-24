#include<iostream>
using namespace std;
class MyClass
{
    public:
    MyClass(){
        cout<<"Default Constructor called"<<endl;
    }
    ~MyClass()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    MyClass obj;
    return 0;
}