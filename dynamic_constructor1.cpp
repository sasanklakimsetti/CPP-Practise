//Dynamic constructor is used to allocate the memory to the objects at the runtime. Memory is allocated at runtime with the help of 'new' operator
#include<iostream>
using namespace std;
class geeks
{
    const char*p;
    public:
    //defualt constructor
    geeks()
    {
        p=new char[6];
        p="geeks";
    }
    void display()
    {
        cout<<p<<endl;
    }
};
int main()
{
    geeks obj;
    obj.display();
}

//exp: In this, we point data member of type char which is allocated memory dynamically by new operator and when we create dynamic memory within the constructor of class, this is known as dynamic constructor