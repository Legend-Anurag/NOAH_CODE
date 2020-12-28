#include<stdio.h>

int main()
{
    int num, i;
    int temp, sum;
    printf("enter the number: ");
    scanf("%d", &num);

    for (int i=0; i<5; i++)
    {
        temp=num%10;
        num=num/10;
        sum+=temp;
    }
    printf("%d",sum);
    return 0;
}