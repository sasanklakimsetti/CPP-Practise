#include<iostream>
using namespace std;
class Sample1;
class Sample2;
class Sample1
{
    private:
    int a;
    friend int sum(Sample1 obj1,Sample2 obj2);
    public:
    void read_1()
    {
        a=10;
    }
};
class Sample2
{
    private:
    int b;
    friend int sum(Sample1 obj1,Sample2 obj2);
    public:
    void read_2()
    {
        b=20;
    }
};
int sum(Sample1 obj1,Sample2 obj2)
{
    return obj1.a+obj2.b;  
}
int main()
{
    Sample1 obj1;
    Sample2 obj2;
    obj1.read_1();
    obj2.read_2();
    cout<<"Sum is "<<sum(obj1,obj2);
}