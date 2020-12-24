/*
A can do a piece of work in 8 days. B can do the same work in 14 days. 
Write a program to calculate and print the number of days to be taken to complete 
the work if A and B work together.
*/

//Code for P5
#include<stdio.h>
int main()
{
    float x, y, t_days;
    printf("Enter time taken(number of days) by 1st person to complete the task:\n");
    scanf("%f",&x);
    printf("Enter time taken(number of days) by 2nd person to complete the task:\n");
    scanf("%f",&y);

    t_days=1/((1/x)+(1/y));
    printf("Total number of days required to complete the work if A and B work together is:%f\n",t_days);
    return 0;
}

