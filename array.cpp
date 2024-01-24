#include<iostream>
using namespace std;
int main()
{
    int a[1024];
    int n;
    cout<<"Enter size of array: ";cin>>n;
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The array is ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}