/*
While travelling in a train, you observe some college students pulling the alarm chain 
simply to get down at their desired point. 
Out of n students m<=n times students pull the chain .
You have to print according to the following:
1)  If m is >=80 % of n then print strict action is required to restrict this event 
2)  If m is between 50 to 80 % then print guidelines should be issued
3)  If between 10 to 50% then print request to restrict the event
4)  If less than 10% then print No action required  
*/

//Code for P4
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter total number of students in the train\n");
    scanf("%d",&n);
    printf("Enter no. of students pull the chain\n");
    scanf("%d",&m);
    
    float percentage = ((float)m/n)*100;
    if (m>n)
        printf("number of students who pulled can not be greater than students present in the train\n");
    else
    {
        if(percentage >= 80)
            printf("Strict Action Required\n");
        else if(percentage>=50 && percentage<=80)
            printf("Guidlines to be issued\n");
        else if(percentage>=10 && percentage<50)
            printf("Restrict the action\n");
        else if(percentage<10)
            printf("No action Required\n");
    }
}