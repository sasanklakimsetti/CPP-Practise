#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;  //return error if it was void *ptr
    cout<<*ptr;
    return 0;
}