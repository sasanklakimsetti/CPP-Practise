#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num=100;
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;
    cout<<setbase(8)<<num<<endl;
    cout<<setbase(16)<<num<<endl;
}