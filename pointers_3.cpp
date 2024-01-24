//FUNCTION USING POINTER
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//using address
/*void my_swap(int& a ,int& b)
{
//swap
int temp = a;
a = b;
b = temp;
}*/    


//using reference
void my_swap(int* a,int* b) 
{
    //swap
    int temp= *a;
    *a = *b;
    *b = temp;

}
int main()
{
    int a=2,b=5;
    //using pass by reference
    my_swap(&a,&b);
    cout<<"Swapped values: ";
    cout<<a<<" "<<b<<endl;
    return 0;
}