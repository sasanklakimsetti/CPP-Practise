//READ MODE IN FILE HANDLING IN C++
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("file handling.txt",ios::in); //'in' is used to open a file in read mode
    if(myFile.is_open())
    {
        string line;
        while(getline(myFile,line)) //reads line of text from myFile and store in line for every line in file
        {
            cout<<line<<endl;  //print the content of each line on console
        }
        myFile.close(); //closing the file
    }
}