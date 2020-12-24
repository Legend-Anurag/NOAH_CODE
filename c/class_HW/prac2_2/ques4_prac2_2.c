/* Suppose you have a device which when fed with the input numbers, 
rearranges them in a particular order using some rules. 
The following is a step-by-step process of rearrangement for the given input of numbers.
Input  :- 1  2 3 4 9 10 8 6
Step I :- 4  1  2 3  9 10 8 6
Step II :- 9 4 1 2 3 10 8 6
Step III :- 10 9 4 1 2 3 8 6
Step IV :- 8 10 9 4 1 2 3 6
Step V:- 6 8 10 9 4 1 2 3

In first step you select 5th last element and places it as first and append rest of the list, 
in second step you select 4th last element and place it as first element and 
append the remaining list and so on. Take the input and print output as specified by 5th step.*/

/* Code for P4*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int a[n],temp;
    printf("Enter %d numbers...",n);
    for(int i=0;i<n;i++)
    {
        printf("\n%d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(int i=n-5;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
        }
    }
    puts("Modified series...");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}