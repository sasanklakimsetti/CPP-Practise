//Basic to class type conversion: use of constructor function inside the class so that we can assign the values of parameter and return class type i.e. data type is changed from basic to class.
#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
    public:
    time(int t)
    {
        hours=t/60;  //t=90-->hours=90/60=1
        minutes=t%60;  //t=90-->minutes=90%60=30
        //total: 1hr 30min
    }
    void display()
    {
        cout<<"The time is ";
        cout<<hours<<"hr "<<minutes<<"min";
    }
};
int main()
{
    int x=90; //90 is integer value
    time t1(x); //now 90 is converted into class type from integer as we have used constructor inside the class.
    t1.display();
    return 0;
}