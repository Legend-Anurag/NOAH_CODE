/*You are given task to write numbers from m to n, during this task how many times 
do you write digit d. e.g. if m=10 and n=25 and d=1 you write from 10 to 20 on screen
and count how many times you write 1. In this case count for d=1 is 11 as from 10 to 19 
you write 1, 11 times and once in 21 so total count is 12?*/

/* Code for P4*/
#include <stdio.h>
int main()
{
   int m,n,d,i,temp,count=0;
   printf("Enter starting no : ");
   scanf("%d",&m);

   printf("Enter last no : ");
   scanf("%d",&n);

   printf("Enter digit you want to count : ");
   scanf("%d",&d);

   for(i=m;i<=n;i++)
   {
       temp=i;
       while(temp)
       {
           if(d==(temp%10))
           count++;
           temp/=10;
       }
   }
   printf("In the given series, repetition of %d is : %d times",d,count); return 0;
}