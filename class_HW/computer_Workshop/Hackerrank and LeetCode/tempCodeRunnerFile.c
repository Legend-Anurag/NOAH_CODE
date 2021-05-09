#include <stdio.h>

int main() 
{
    int n, rev;
    int array[n];
    scanf("%d", &n);

    for(int i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }

    for(rev=n-1; rev>=0; rev--)
    {
        printf("%d ", array[rev]);
    }
      
   return 0;
}