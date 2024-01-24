#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void calculateArea()=0;
};
class Circle : public Shape
{
    int radius;
    public:
    Circle(int r):radius(r){};
    void calculateArea()
    {
        cout<<"The area of the circle is "<<3.14*radius*radius<<endl;
    }
};
class Rectangle : public Shape
{
    int length;
    int breadth;
    public:
    Rectangle(int l, int b):length(l),breadth(b){};
    void calculateArea()
    {
        cout<<"The area of the rectangle is "<<length*breadth<<endl;
    }
};
int main()
{
    Circle c1(4);
    c1.calculateArea();
    Rectangle r1(3,4);
    r1.calculateArea();
    return 0;
}