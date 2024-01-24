#include<iostream>
using namespace std;
class PrincipalAMount
{
    int money;
    public:
    PrincipalAMount(int m):money(m){};
    int getPrincipal() const
    {
        return money;
    }
};
class Rate
{
    double inte;
    public:
    Rate(double in):inte(in){};
    double getRate() const
    {
    return inte;
    }
};
class Time
{
    int t;
    public:
    Time(int t_):t(t_){};
    protected:
    int getTime() const
    {
        return t;
    }
};
class SimpleInterest : public PrincipalAMount, public Rate, public Time
{
    public:
    SimpleInterest(int mo, double r, int ti):PrincipalAMount(mo),Rate(r),Time(ti){};
    double getSimpleInterest() const
    {
        return (getPrincipal() * getRate() * getTime()) / 100.0;
    }
};
int main()
{
    SimpleInterest si(1000,12.0,5);
    cout<<"The simple interest is "<<si.getSimpleInterest();
}