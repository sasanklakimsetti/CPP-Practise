// You are using GCC
#include<iostream>
using namespace std;

// declare the function
int sum(int a , int b);
int mul(int a, int b);
bool cmp(int a, int b);
int main()
{
   int a,b;
   cin>>a>>b;
   //check if multiply is greater than addition or not
   bool ans = cmp(a,b);
   if(ans ==true)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
   return 0;
}

//defination of the function
int mul(int a, int b)
{
    return a*b;
}
int sum(int a, int b)
{
    return a+b;
}
bool cmp(int a, int b)
{
    int _sum = sum(a,b);
    int _mul = mul(a,b);
    if(_sum < _mul) return 1;
    return 0;
}

