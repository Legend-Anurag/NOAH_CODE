/* Practical 4.3 :
There are n customer of bank who took loan of different amounts (Entered by User) 
and for different time periods but same rate of interest. 
The interest is compounded annually find the total interest earned by bank from all n customers.
*/

/* Code for P3*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   int n,i;
   printf("Enter no of customer : ");
   scanf("%d",&n);

   float principal[n],time[n],r,interest=0;
   printf("Enter annual rate of interest : ");
   scanf("%f",&r);
   printf("\n********Enter customer data********\n");

   for(i=0;i<n;i++)
   {
       printf("\nCustomer %d\n",i+1);
       printf("Principal amount : ");
       scanf("%f",&principal[i]);
       printf("Time period : ");
       scanf("%f",&time[i]);
   }

   //interest calculation
   for(i=0;i<n;i++)
   {
       interest+=principal[i]*(pow((1+(r/(100))),time[i])-1);
   }
   printf("\n\nTotal interest earned by bank from all customer : %.2f",interest); return 0;
}

