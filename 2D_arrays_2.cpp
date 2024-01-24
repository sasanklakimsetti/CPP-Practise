//ARRAY DECLARATION AND PROCESSING OF 2D ARRAYS INSIDE A CLASS
#include<iostream>
using namespace std;
class Matrix
{
    private:
    int rows;
    int columns;
    int **matrix;
    public:
    Matrix(int r, int c) : rows(r),columns(c)  //constructor for matrix
    {
        //allocating memory to matrix
        matrix=new int*[rows];
        for(int i=0;i<rows;i++)
        {
            matrix[i]=new int[columns];
        }
    }
    void readMatrix()
    {
        cout<<"Enter the elements of the matrix: ";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cin>>matrix[i][j];
            }
        }
    }
    void printMatrix()
    {
        cout<<"The matrix is "<<endl;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<columns;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //Destructor to release memory
    ~Matrix()
    {
        for(int i=0;i<rows;i++)
        {
            delete[] matrix;
        }
        delete[] matrix;
    }
};
int main()
{
    int rows,columns;
    cout<<"Enter no.of rows of matrix: ";cin>>rows;
    cout<<"Enter no.of colummns of matrix: ";cin>>columns;
    Matrix matrix1(rows,columns); //Create an instance of matrix
    matrix1.readMatrix();
    matrix1.printMatrix();
    return 0;
}