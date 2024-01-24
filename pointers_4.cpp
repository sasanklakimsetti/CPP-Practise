//ARRAY USING POINTERS

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={10,20,3,0,5};
    //cout<<*arr<<endl;
    //cout<<*(arr+1)<<endl;  //address gets add on by 4 bit
    // +1 = +4bits
    //cout<<*(arr+2)<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    return 0;
}