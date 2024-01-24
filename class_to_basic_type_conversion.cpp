//class to basic type:  constructor function doesn't support conversion from class to a basic type. So we use overloaded casting operator that convert a class type data to basic type.

//syntax: operator typename(){//program statement}

//conditions: *the casting operator must be a class member i.e. there should be atleast one data member with the data type used in casting.
		    //*it must not specify a return type
		    //*it must not have any arguments. since it is a member function, it is invoked by the object and therefore, the values used for, conversion inside the function belongs to the object that invoked the function. as a result function does not need an argument.



#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:
    time(int t)
    {
        hours=t/60;
        minutes=t%60;
    }
    int add()
    {
        cout<<"The time is ";
        cout<<hours<<"hrs "<<minutes<<"min";
        int m;
        m=minutes;
        return m;
    }
};
int main()
{
    int x=90;
    time t1(x);
    int j;
    j=t1.add();
    cout<<endl<<"The value of j is "<<j;
    return 0;
}