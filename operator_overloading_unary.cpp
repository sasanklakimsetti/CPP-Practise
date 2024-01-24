#include<iostream>
using namespace std;
class Count
{
    private:
    int value;
    public:
    Count(int k)
    {
        value=k;
    }
    void operator++(int)
    {
        value++;
    }
    void display()
    {
        cout<<"Count: "<<value<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    Count count(n);
    count++;
    count.display();
}