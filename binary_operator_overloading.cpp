#include<iostream>
using namespace std;
class Complex
{
    int real;
    int imaginary;
    public:
    Complex()
    {
        this->real=0;
        this->imaginary=0;
    }
    Complex(int r, int i)
    {
        this->real=r;
        this->imaginary=i;
    }
    Complex operator+(Complex &c1)
    {
        Complex c2;
        c2.real=this->real+c1.real;
        c2.imaginary=this->imaginary+c1.imaginary;
        return c2;
    }
    Complex operator-(Complex &c3)
    {
        Complex c4;
        c4.real=this->real-c3.real;
        c4.imaginary=this->imaginary-c3.imaginary;
        return c4;
    }
    void display_add()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    void display_sub()
    {
        cout<<real<<" - "<<imaginary<<"i"<<endl;
    }
};
int main()
{
    Complex c1(2,5);
    Complex c2(1,3);
    Complex c3;
    Complex c4;
    c3=c1+c2;
    c4=c1-c2;
    c3.display_add();
    c4.display_sub();
    return 0;
}