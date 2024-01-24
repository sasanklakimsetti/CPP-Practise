#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(int a)
    {
        this->a=a;
    }
    ~A(){};
    int getA()
    {
        return a;
    }
};
class B:public A
{
    public:
    B(int b):A(b){};
    ~B(){};
    int getB()
    {
        return b;
    }
};
class C:public A
{
    public:
    C(int c):A(c){};
    ~C(){};
    int getC()
    {
        return c;
    }
};
class D:public B,public C
{
    public:
    D(int d, int e):B(d),C(e){};
    ~D(){};
    int getD()
    {
        return d;
    }
}