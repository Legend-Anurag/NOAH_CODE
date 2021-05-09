#include<iostream>
using namespace std;

int main()
{
    int **a,r,c,i,j,sum=0;
    cout<<"Enter row and colum: ";
    cin>>r>>c;
    
    a=new int*[r];
    for(i=0; i<r; i++)
    {
        a[i]=new int[c];
    }

    cout<<"Enter values: ";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Elements: "<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<a[i][j]<<"\t";
            sum+=a[i][j];
        }
        cout<<endl;
    }

    cout<<"\nThe sum is: "<<sum;
    return 0;
}