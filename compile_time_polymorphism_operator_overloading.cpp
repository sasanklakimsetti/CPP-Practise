#include<iostream>
using namespace std;
class Overload
{
    private:
    int n1,n2;
    public:
    Overload(int a, int b)
    {
        n1=a;
        n2=b;
        int result=a-b;
        cout<<"Result: "<<result<<endl;
    }
    //operator overloading
    void operator- ()
    {
        n1= -n1;
        n2= -n2;
    }
    void display()
    {
        cout<<"n1: "<<n1<<" "<<"n2: "<<n2<<endl;
    }
};
int main()
{
    Overload o1(6,8);
    -o1;  //will do operator overloading as mentioned in class definition
    o1.display();
    return 0;
}