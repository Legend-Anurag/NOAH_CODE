// https://www.hackerrank.com/challenges/birthday-cake-candles/problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int inp;
    scanf("%d",&inp);
    int arr[inp];
    int max=0,count=0;
    for(int i=0;i<inp;i++)
    {
        int candle;
        scanf("%d",&candle);
        arr[i]=candle;
        
        max=(candle>max)?candle:max;
    }
    
    for(int j=0;j<inp;j++)
    {
        count+=(arr[j]==max)?1:0;
    }
    printf("%d",count);
    return 0;
}
