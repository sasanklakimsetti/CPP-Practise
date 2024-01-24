/*Create a union representing different geometric shapes (e.g., circle, rectangle, triangle). Each shape should store its relevant attributes (e.g., radius, length, width). Write a program to input and display information about different shapes.*/
#include<iostream>
using namespace std;
union Shape
{
    struct Circle
    {
        double radius;
    }circle;
    struct Rect
    {
        double length;
        double width;
    }rect;
    struct Tri
    {
        double height;
        double base;
    }tri;
    struct Squ
    {
        double side;
    }squ;
};
int main()
{
    Shape shape;
    int n;
    cout<<"Enter choice: " <<endl;
    cin>>n;
    if(n==1)
    {
        cout<<"Enter radius of the circle: ";
        cin>>shape.circle.radius;
        cout<<endl<<"Radius of the circle: "<<shape.circle.radius<<endl;
    }
    else if(n==2)
    {
        cout<<"Enter the length and breadth of the rectangle: ";
        cin>>shape.rect.length>>shape.rect.width;
        cout<<endl<<"Length of rectangle is: "<<shape.rect.length<<endl<<"Width of rectangle is: "<<shape.rect.width<<endl;
    }
    else if(n==3)
    {
        cout<<"Enter the base of triangle and height of triangle: ";
        cin>>shape.tri.base>>shape.tri.height;
        cout<<endl<<"Base of triangle is: "<<shape.tri.base<<endl<<"Height of triangle is: "<<shape.tri.height<<endl;
    }
    else if(n==4)
    {
        cout<<"Enter side of the square: ";
        cin>>shape.squ.side;
        cout<<endl<<"Side of square is: "<<shape.squ.side<<endl;
    }
    else
    {
        cout<<"Invalid";
    }
    return 0;
}