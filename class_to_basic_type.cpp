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
    operator int()
    {
        return (hr*60+min);
    }
    void display()
    {
        cout<<"The time is "
    }
};
int main()
{
    int t=10;
}