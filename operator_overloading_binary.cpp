#include<iostream>
using namespace std;
class Acceleration
{
    private:
    double velocity;
    double time;
    public:
    Acceleration (double v, double t)
    {
        this->velocity=v;
        this->time=t;
    }
    double operator /(double)
    {
        Acceleration a = velocity / time;
        return a;
    }
};
int main()
{
    double velocity,time;
    cout<<"Velocity: ";
    cin>>velocity;
    cout<<"Time: ";
    cin>>time;
    Acceleration acc1(velocity,time);
    double result= velocity/time;
    cout<<result;
}