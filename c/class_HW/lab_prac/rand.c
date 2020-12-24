#include <stdio.h>
void greater();
void main()
{
	greater();
}

void greater()
{
    int i,j;
    scanf("%d %d",i,j);
    if (i>j)
    {
        printf("i %d is greater",i);
    }
    else
    {
        printf("j %d is greater",j);
    }
}