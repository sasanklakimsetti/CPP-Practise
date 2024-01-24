#include<iostream>
using namespace std;
int main()
{
    //operators
    int a,b;
    cout<<"Enter two values: ";
    cin>>a>>b;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div;
    if(b!=0)
    {
        div=a/b;
    }
    else
    {
        div = INT64_MAX;
    }
    int mod=a%b;
    cout<<sum<<" "<<sub<<" "<<mul<<" "<<div<<" "<<mod<<endl;
    //a = 010,b=101;
    //a and b = (a&b)=000; //and operator
    //a or b = (a|b)=111; //or operator
    //101>>1=010; //right shift
    //111<<1=110; //left shift
    //~100=011; //compliment
    //a=a+b -> a+=b;
    //a=()?100:200; //ternary operator -> bracket should consist of the condition for the true condition
    
    return 0; //1:00:00
}