#include<iostream>
using namespace std;
int main()
{
    int a[100],n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)    
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        a[i]=abs(a[i]-a[i-1]);
        if(a[i]==x)
        {
            count++;
        }
    }
    cout<<count;
}