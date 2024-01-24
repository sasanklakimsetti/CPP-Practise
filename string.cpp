#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<"The string is "<<str<<endl;
    str.push_back('I');
    cout<<"After pushing back: "<<str<<endl;
    str.pop_back();
    str.pop_back();
    cout<<"After popping back: "<<str<<endl;
}