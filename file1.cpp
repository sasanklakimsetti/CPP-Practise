#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    fstream file1;
    file.open("Hello1.txt",ios::out);
    if(file.is_open())
    {
        file<<"Hello all\n";
        file<<"How are you?";
        file.close();
    }
    file.open("Hello1.txt",ios::in);
    if(file.is_open())
    {
        file1.open("Hello.txt",ios::out);
        cout<<"\nData in the file: ";
        string line;
        while(getline(file,line))
        {
            file1<<line<<endl;
        }
        file1.close();
        file.close();
    }
    file.open("Hello1.txt",ios::app);
    if(file.is_open())
    {
        cout<<"\nEnter text to append into file: ";
        string line;
        getline(cin,line);
        file<<"\n"<<line;
        file.close();
    }
    file.open("Hello1.txt",ios::in);
    if(file.is_open())
    {
        cout<<"The data in file after appending: ";
        string line;
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }
    file.open("Hello1.txt",ios::trunc);
    file.close();
    file.open("Hello1.txt",ios::in);
    if(file.is_open())
    {
        cout<<"The data in file after truncation: "<<endl;
        string line;
        while(getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
    }
}