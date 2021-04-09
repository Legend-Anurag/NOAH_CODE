/*  
A function is provided with zero or more arguments, and it executes the statements on it. 
Based on the return type, it either returns nothing (void) or something. 
Develop a program to find greatest of four numbers using function 
int max_of_four(int a, int b, int c, int d) which reads four arguments and 
returns the greatest of them.
*/

/* Code for P1*/
#include<stdio.h>
#include<stdlib.h>

int max_of_four(int a, int b, int c, int d)
{
    if (a>b && a>c && a>d) 
        return a;
    else if (b>c && b>d) 
        return b;
    else if (c>d) 
        return c;
    else
        return d;
}

int main()
{
    int a,b,c,d;
    printf("Enter any 4 numbers :\n"); 
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("Largest out of 4 no is : %d",max_of_four(a,b,c,d)); 
    return 0;
}
