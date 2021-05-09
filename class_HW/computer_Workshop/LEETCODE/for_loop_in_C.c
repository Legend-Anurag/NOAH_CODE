//https://www.hackerrank.com/challenges/for-loop-in-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
      
    for(a; a<=b; a++)
    {
        printf("%s\n",((a==1)?"one":a==2?"two":a==3?"three":a==4?"four":a==5?"five":a==6?"six":a==7?"seven":a==8?"eight":a==9?"nine":(a%2)==0?"even":"odd"));
    }
    return 0;
}