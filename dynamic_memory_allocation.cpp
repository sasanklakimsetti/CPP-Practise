// new data_type for allocaing memory
//delete for deallocation
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int;  //cpp compiler will allocate memory from the heap to store an integer value
    cout<<ptr<<endl;  //will print memory address
    *ptr=24;
    cout<<*ptr;
    delete ptr;  //deallocation of memory so that others won't use the memory
    return 0;
}