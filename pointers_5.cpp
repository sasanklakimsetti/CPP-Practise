//ARRAY OF POINTERS

#include<iostream>
#include<bits/stdc++.h>
using namespace std;;
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr_arr[5];   //array of size 5 having pointers
    for(int i=0;i<5;i++)
    {
        ptr_arr[i]=(arr+i);  //storing of address of variables present in the array
    }
    for(int i=0;i<5;i++)
    {
        cout<<*(ptr_arr[i])<<endl;  //printing the variable present in the array referring the addresses of the variables
    }
    return 0;
}