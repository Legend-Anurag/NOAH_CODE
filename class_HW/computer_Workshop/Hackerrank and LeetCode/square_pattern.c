// https://www.hackerrank.com/challenges/printing-pattern-2/problem
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int m=0;
    for (int i=0; i<2 * num-1; i++) 
    {
        if (i<num)
        {
            m=i;
        }
        
        else
        {
            m=2*(num-1)-i;
        }

        for (int j=0; j<m; j++)
            printf("%d", num-j);

        for (int j=0; j<2 * (num-m)-1; j++)
            printf("%d", num-m);

        for (int j=m-1; j>=0; j--)  
            printf("%d", num-j);

        printf("\n");
    }
    return 0;
}