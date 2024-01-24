#include<iostream>
using namespace std;
class Sample
{
    private:
    int a;
    int b;
    friend int sum(Sample Obj);
    public:
    void read()
    {
        a=10;
        b=20;
    }
};
int sum(Sample Obj)
{
    return Obj.a+Obj.b;
}
int main()
{
    Sample Obj;
    Obj.read();
    cout<<"Sum is "<<sum(Obj);
}