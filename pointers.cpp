//DECLARATION AND INITIALIZATION OF A POINTER

#include<iostream>
#include<bits/stdc++.h>    //library used for all
using namespace std;
int main()
{
    int a=10;
    //cout<<"Value: "<<a<<endl;
    int *ptr_a=&a;
    cout<<ptr_a<<endl; //to get the address of the variable
    cout<<*ptr_a<<endl; //to get the value of variable present in that address
    return 0;
}