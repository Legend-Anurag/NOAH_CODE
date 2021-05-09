// https://www.hackerrank.com/challenges/printing-pattern-2/problem
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    for (int i=0; i<2 * num-1; i++) 
    {
        int m;
        if (i<num)
        {
            m=i;
        }
        
        else
        {
            m=2*(num-1)-i;
        }

        for (int j=0; j<m; j++)
            cout << num-j;

        for (int j=0; j<2 * (num-m)-1; j++)
            cout << num-m;

        for (int j=m-1; j>=0; j--)  
            cout << num - j;

        cout << endl;
    }
    return 0;
}