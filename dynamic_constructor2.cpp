#include<iostream>
using namespace std;
class geeks
{
    int *p;
    public:
    //default constructor
    geeks()
    {
        p=new int[3]{1,2,3};
        for(int i=0;i<3;i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    geeks *obj=new geeks[5];
}

//exp:  in this program, we have created array of object dynamically. the first object is ptr[0], second is ptr[1] and so on. for each object default constructor is called and for each object memory is allocated to pointer type variable by new operator.
//if initialise object of geeks without pointer and without dynamic allocation using 'new' operator, it will print the data only. in this we are calling object of class 5 times using dynamic allocation with 'new' operator. you  can refer to previous example of dynamic constructor where we have just called the object without dynamic allocation of the object.