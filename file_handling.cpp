// FILE HANDLING IN C++
#include <iostream>
#include <fstream> //library used for file handling
using namespace std;
int main()
{
    fstream myFile;                             // can open, read, write file
    myFile.open("file handling.txt", ios::out); // write mode is used in this by 'out' //receives two arguments: file name, mode of file opening
    if (myFile.is_open())
    {
        myFile << "Hello\n This is Sasank"; // writing text into the file
        myFile << "\nI'm learning C++";
        myFile.close(); // closing the file
    }
    myFile.open("file handling.txt", ios::app); // append mode is used in this by 'app'
    if (myFile.is_open())
    {
        myFile << "\nHello again";
        myFile.close(); // closing the file
    }
    return 0;
}
