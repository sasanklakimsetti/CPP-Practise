/*Traffic Lights:
Create an enum to represent traffic light colors (e.g., Red, Yellow, Green). Write a program that simulates a traffic light and displays the next color when a button is pressed.*/
#include<iostream>
using namespace std;
enum Colors{Red='R',Yellow='Y',Green='G'};
int main()
{
    Colors traffic;
    char choice;
    cin>>choice;
    traffic=static_cast<Colors>(choice);
    switch(choice)
    {
        case Red:
        cout<<"RED";
        break;
        case Yellow:
        cout<<"YELLOW";
        break;
        case Green:
        cout<<"GREEN";
        break;
        default:
        exit;
    }
    return 0;
}