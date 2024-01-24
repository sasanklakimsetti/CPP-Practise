#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    cin>>rows>>columns;
    int **p=new int*[rows];
    for(int i=0;i<rows;i++)
    {
        p[i]=new int[columns];
    }
    cout<<"Enter the elements of the matrix: ";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"The matrix is "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int **q=new int*[columns];
    for(int i=0;i<columns;i++)
    {
        q[i]=new int[rows];
    }
    for(int i=0;i<columns;i++)
    {
        for(int j=0;j<rows;j++)
        {
            q[j][i]=p[i][j];
        }
    }
    cout<<"The transposed matrix is "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<q[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<rows;i++)
    {
        delete[] p[i];
    }
    delete[] p;
    for(int i=0;i<columns;i++)
    {
        delete[] q[i];
    }
    delete[] q;
}