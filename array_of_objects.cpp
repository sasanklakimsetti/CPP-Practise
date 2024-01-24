//Array of objects
#include<iostream>
using namespace std;
class Array
{
    public:
    int value;
    void display()
    {
        cout<<value<<" ";
    }
};
int main()
{
    Array arr[1024];
    int n;
    cout<<"Enter the size of the array: ";cin>>n;
    cout<<endl<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].value;
    }
    cout<<endl<<"The array is ";
    for(int i=0;i<n;i++)
    {
        arr[i].display();
    }
}