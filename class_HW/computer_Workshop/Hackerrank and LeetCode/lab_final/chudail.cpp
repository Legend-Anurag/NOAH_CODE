#include<iostream>
#include<iomanip>
using namespace std;

class matrix
{
    int maxrow, maxcol; 
    int * ptr;
    public:
        matrix( int r, int c )
        {
            maxrow = r; 
            maxcol = c;
            ptr	= new int [r * c];
        }
    
        void getmat( )
        {
            int i,j, mat_off,temp;
            cout << endl << "Enter elements for matrix:" << endl;
            
            for( i = 0; i < maxrow; i++ )
            {
                for( j = 0; j < maxcol; j++ )
                {
                    mat_off = i * maxcol + j;
                    cin >> ptr[ mat_off ];
                }
            }
        }

        void printmat( )
        {
            int i, j, mat_off;
            for( i = 0; i < maxrow; i++ )
            {
                cout << endl;
                for( j = 0; j < maxcol; j++ )
                {
                    mat_off = i * maxcol + j;
                    cout << setw(3) << ptr[ mat_off ];
                }
            }
        }

        int delmat( )
        {
            matrix q ( maxrow - 1, maxcol - 1 );
            int	sign = 1, sum = 0, i, j,k,count;
            int	newsize,newpos,pos,order;
            order = maxrow; 

            if( order == 1 )
            {
                return ( ptr[ 0 ] );
            }
            
            for( i = 0; i < order; i++, sign *= -1 )
            {
                for( j = 1; j < order; j++ )
                {
                    for( k = 0, count = 0; k < order; k++ )
                    {
                        if( k == i )
                        continue;
                        
                        pos = j * order + k;
                        newpos = ( j - 1 ) * ( order - 1 ) + count;
                        
                        q.ptr[ newpos ] = ptr[ pos ];
                        count++;
                    }
                }
                sum = sum + ptr[ i ] * sign * q.delmat( );
            }
            return ( sum );
        }

        matrix operator +( matrix b )
        {
            matrix c ( maxrow, maxcol );
            int	i,j,mat_off;
            for( i = 0; i < maxrow; i++ )
            {
                for( j = 0; j < maxcol; j++ )
                {
                    mat_off = i * maxcol + j;
                    c.ptr[ mat_off ] = ptr[ mat_off ] + b.ptr[ mat_off ];
                }
            }
            return ( c );
        }

        int operator ==( matrix b )
        {
            int i,j, mat_off;
            if( maxrow != b.maxrow||maxcol != b.maxcol )
                return ( 0 );

            for( i = 0; i < maxrow; i++ )
            {
                for( j = 0; j < maxcol; j++ )
                {
                    mat_off = i * maxcol + j; 
                    
                    if( ptr[ mat_off ] != b.ptr[ mat_off ] )
                        return ( 0 );
                }
            }
        return(1);
    }
};

int main()
{
    int rowa, cola, rowb, colb;
    
    cout << endl << "Enter dimensions of matrix A(row col) ";
    cin >> rowa >> cola;    
    matrix a ( rowa, cola );
    a.getmat( );

    cout << endl << "Enter dimensions of matrix B(row col) ";
    cin >> rowb >> colb;
    matrix b ( rowb, colb );
    b.getmat( );
    
    matrix c ( rowa, cola );
    c = a + b;

    cout << endl << "The sum of two matrics = ";
    c.printmat( );

    if( a == b )
        cout << endl << "Both matrices are equal"; 
    else
    cout << endl << "Both matrices are not equal";
    return 0;
}
