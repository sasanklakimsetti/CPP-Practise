//UNNDERSTANDING THE CONCEPT OF STRINGS IN C++ WITH VARIOUS MEMBER FUNCTIONS AND MODIFIERS
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="Hello";
    string str2="World";
    string result=str1+" "+str2;
    cout<<result<<endl;
    cout<<"The length of  the string is "<<result.length()<<endl;
    cout<<"The string at 6th index is "<<result.at(6)<<endl;
    cout<<"'World' is at "<<result.find("World")<<endl;
    cout<<"Appending '!' to the result: "<<result.append("!")<<endl;
    cout<<"Result string after replacement: "<<result.replace(6,5,"C++")<<endl;
    cout<<"Result string after erasing: "<<result.erase(6,5);
}