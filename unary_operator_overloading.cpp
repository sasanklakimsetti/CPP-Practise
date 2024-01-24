#include<iostream>
using namespace std;
class Hello
{
    int x;
    int y;
    public:
    Hello(int a, int b) : x(a),y(b)
    {
        cout<<"Constructor called"<<endl;
    };
    ~Hello()
    {
        cout<<"Destructor called"<<endl;
    }
    Hello operator ++()
    {
        x--;
        y++;
    }
    Hello operator--(int)
    {
        x++;
        y--;
    }
    void display()
    {
        cout<<"The value of x: "<<x<<endl<<"The value of y: "<<y<<endl;
    }
};
int main()
{
    Hello h1(1,2);
    h1.display();
    ++h1;
    h1.display();
    h1--;
    h1.display();
}