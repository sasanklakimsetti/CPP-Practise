//Memory leak occurs when the memory is allocated but forgot to deallocate memory
#include<iostream>
using namespace std;
void my_func()
{
    int *data=new int;
    *data=50;
    cout<<data<<endl;
    delete data;
}
int main()
{
    my_func();
    my_func();
    my_func();
}