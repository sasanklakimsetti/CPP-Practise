//ARRAY DECLARATION AND PROCESSING OF 2D ARRAY INSIDE CLASS
#include<iostream>
using namespace std;
int main()
{
    int matrix[1000][1000];
    int rows,columns;
    cout<<"Enter no.of rows of the matrix: ";cin>>rows;
    cout<<endl<<"Enter no.of columns of the matrix: ";cin>>columns;
    if(rows<=1000&&columns<=100)
    {
        cout<<"Enter elements of the matrix: ";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cin>>matrix[i][j];
            }
        }
        cout<<endl<<"The matrix is "<<endl;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Array is overflown"<<endl;
    }
}