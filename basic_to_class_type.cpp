#include<iostream>
using namespace std;
class Time
{
    int hr;
    int min;
    public:
    Time(int t)
    {
        hr=t/60;
        min=t%60;
    }
    void display()
    {
        cout<<"Time is "<<hr<<":"<<min<<endl;
    }
};
int main()
{
    int t=1000;
    Time t1(t);
    t1.display();
}