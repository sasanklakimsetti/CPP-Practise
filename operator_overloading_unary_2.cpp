#include<iostream>
using namespace std;
class Count
{
    private:
    int value;
    public:
    Count(){}
    Count (int k)
    {
        value=k;
    }
    Count operator++()
    {
        Count temp;
        temp.value = --value;
        return temp;
    }
    Count operator++(int)
    {
        Count temp;
        temp.value=value--;
        return temp;
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
    Count obj1(n);
    Count result;
    result = ++obj1;
    result.display();
    result=obj1++;
    result.display();
}