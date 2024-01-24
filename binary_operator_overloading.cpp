#include<iostream>
using namespace std;
class Complex
{
    public:
    int real,imaginary;
    //Default Constructor
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
    //Operator overloading (+) to perform addition of two complex numbers
    //Call by reference
    Complex operator+(Complex &c2)
    {
        Complex c3; //new object of class Complex to store the value of addition of complex numbers
        c3.real=this->real+c2.real;  //this->real refers to the real part of first complex number and c2.real refers to the real part of second complex number 
        c3.imaginary=this->imaginary+c2.imaginary;  //same as real part we are doing for imaginary part

        return c3;
    }
    //Operator overloading of - operator
    Complex operator-(Complex &c2)
    {
        Complex c4;
        c4.real=this->real-c2.real;
        c4.imaginary=this->imaginary-c2.imaginary;
        return c4;
    }
};
int main()
{
    Complex C1(8,9);
    Complex C2(10,10);
    Complex C3;
    C3=C1+C2;
    cout<<"The resultant complex number after addition is "<<C3.real<<" + "<<C3.imaginary<<"i"<<endl;
    Complex C4;
    C4=C1-C2;
    cout<<"The resultant complex number after subtraction is "<<C4.real<<" - "<<C4.imaginary<<"i"<<endl;
}