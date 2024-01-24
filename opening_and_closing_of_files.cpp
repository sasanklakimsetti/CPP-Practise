//Data File operations
//Opening and closing of files
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inputFile("hello.txt"); //opens the file for reading
    if(inputFile.is_open())
    {
        cout<<"File found"<<endl;
        return 1;
    }
    else
    {
        cout<<"File not found"<<endl;
    }
    inputFile.close();  //close the file
    return 0;
}