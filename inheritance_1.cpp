#include<iostream>
using namespace std;
class Shape
{
    public:
    Shape()
    {
        cout<<"Shape constructor called"<<endl;
    }
    ~Shape()
    {
        cout<<"Shape destructor called"<<endl;
    }
    private:
    void draw()
    {
        cout<<"Drawing a shape"<<endl;
    }
};
class Circle : public Shape
{
    double radius;
    public:
    Circle(double r) : radius(r)
    {
        cout<<"Circle constructor called"<<endl;
    }
    ~Circle()
    {
        cout<<"Circle Destructor called"<<endl;
    }
    void draw()
    {
        cout<<"Drawing a cricle"<<endl;
    }
    void getRadius()
    {
        cout<<"The radius of the circle is "<<radius<<endl;
    }
};
class Square : private Shape
{
    int side;
    public:
    Square(int s):side(s)
    {
        cout<<"Square constructor called"<<endl;
    }
    ~Square()
    {
        cout<<"Sqaure destructor called"<<endl;
    }
    void draw()
    {
        cout<<"Drawing a square"<<endl;
    }
    void getSide()
    {
        cout<<"Side of square is "<<side<<endl;
    }
};
class Triangle : protected Shape
{
    int base;
    int height;
    public:
    Triangle(int b,int h):base(b),height(h)
    {
        cout<<"Triangle constructor called"<<endl;
    }
    ~Triangle()
    {
        cout<<"Triangle destructor called"<<endl;
    }
    void draw()
    {
        cout<<"Drawing a triangle"<<endl;
    }
    void getMeas()
    {
        cout<<"Base of triangle is "<<base<<" and height is "<<height<<endl;
    }
};
int main()
{
    Shape s1();
    Circle c1(10.0);
    c1.draw();
    c1.getRadius();
    Square sq(5);
    sq.draw();
    sq.getSide();
    Triangle t1(4,3);
    t1.Triangle::draw();
    t1.getMeas();
    return 0;
}