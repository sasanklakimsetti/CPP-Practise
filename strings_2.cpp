//MORE MEMBER FUNCTIONS AND MODIFIERS OF STRINGS
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello";
    const char*  cstring=str.c_str(); //c_str(): returns a pointer to a null-terminated character array representing the current value of the string.
    //substr() creates a new string by extracting a substring from the current string.
    string sub=str.substr(0,4); //4th index is not included in the output
    //empty(): checks if the sting is empty
    bool empty=str.empty();
    //compare() compares the value of the string object with the string passed as an argument.
    /*
    If the two strings are equal, it returns 0.
    If the first string is lexicographically less than the second string, it returns a negative value.
    If the first string is lexicographically greater than the second string, it returns a positive value.
    */
    string str1="apple";
    string str2="banana";
    string str3="app";
    int comp1=str1.compare(str2);
    int comp2=str1.compare(str3);
    int comp3=str2.compare(str1);
    int comp4=str2.compare(str3);
    int comp5=str3.compare(str1);
    int comp6=str3.compare(str2);
    //insert() inserts additional characters into the string at a specified position.
    string insert=str.insert(0,"!");
    cout<<"The string is "<<str<<endl;
    cout<<"The string accessing through pointer is "<<cstring<<endl;
    cout<<"The substring is "<<sub<<endl;
    if(empty) cout<<"String is empty"<<endl;
    else cout<<"String is not empty"<<endl;
    cout<<"Comparing str1 with str2 "<<comp1<<endl;
    cout<<"Comparing str1 with str3 "<<comp2<<endl;
    cout<<"Comparing str2 with str1 "<<comp3<<endl;
    cout<<"Comparing str2 with str3 "<<comp4<<endl;
    cout<<"Comparing str3 with str1 "<<comp5<<endl;
    cout<<"Comparing str3 with str2 "<<comp6<<endl;
    cout<<"String after insertion: "<<insert<<endl;
    cout<<"String after pushback: ";
    str.push_back('!'); //push_back() appends a single character to the end of the string.
    cout<<str<<endl; 
    cout<<"String after pushing back again: ";
    str.push_back('!');
    cout<<str<<endl;
    cout<<"String after popback: ";
    str.pop_back();//pop_back() removes the last character from the string.
    cout<<str<<endl;
    cout<<"String after resizing: ";
    str.resize(2); //resize() resizes the string to a specified length
    cout<<str<<endl; 
}