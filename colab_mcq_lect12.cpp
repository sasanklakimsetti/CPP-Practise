#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello, World!";
    str.replace(7,5,"Universe");
    cout<<str;
    return 0;
}