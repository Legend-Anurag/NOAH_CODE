/*
WAP for creating a matrix class which can handle integer matrices of
different dimensions. Overload the operator (+) for addition and (==) comparison of matrices.
*/

#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3],comp=1;
    public:
        void accept();
        void display();
        void operator +(Matrix x);
        void operator ==(Matrix x);
};
void Matrix::accept()
{
        cout<<"\n Enter Matrix Element (3 X 3) : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}

void Matrix::operator ==(Matrix x)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]!=x.a[i][j])
            {
                comp=0;
                break;
            }
        }
    }
    
    if(comp==0)
    {
        cout<<endl<<"The matrix are not equal";
    }
        
    else
    {
        cout<<endl<<"Both matrix are not Equal";
    }
}

int main()
{
        Matrix m,n;
        m.accept();
        n.accept();
        cout<<"\n First Matrix : \n\n";
        m.display();
        cout<<"\n Second Matrix : \n\n";
        n.display();
        m+n;
        
        m==n;
        return 0;
}