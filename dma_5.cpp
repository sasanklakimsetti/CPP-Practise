#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int *a=new int[size];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"The original array is ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"The sorted array is ";
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}