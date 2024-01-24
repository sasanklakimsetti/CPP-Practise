#include<iostream>
using namespace std;
class first
{
    private:
    int a;
    int b;
    public:
    void read()
    {
        a=10;
        b=20;
    }
    friend class second;
};
class second
{
    public:
    void display(first obj)
    {
        cout<<obj.a<<endl<<obj.b<<endl;
    }
};
int main()
{
    first f;
    second s;
    f.read();
    s.display(f);
    return 0;
}