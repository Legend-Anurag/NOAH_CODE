/*  
You store name of your friends in string array. 
You are given task to print name of your friend whose name start with particular character 
and after you find first name in the list you have stop searching and 
print name you search in the list.
*/

/* Code for P3*/
#include <stdio.h>
#include <string.h>
int main()
{
	char name[30][15];
    char ch[100];
    int i,n,found=0;
    
    printf("Enter how many names you want to enter:");
    scanf("%d",&n);
    printf("Enter names of %d friends:",n);
    
    for (i=0;i<n;i++)
        scanf("%s",name[i]);
	    printf("Names are: ");
        
    for (i=0;i<n;i++)
        printf("%s\n",name[i]);  // display string
        printf("\nEnter Name to be Searched(CASE SENSITIVE): ");
        scanf(" %s",&ch);
    for(i=0;i<n;i++)
    {
        if (strcmp(name[i], ch)==0)
        {
            found=1;
            break;
        }
    }
    if(found!=0)
        printf("Your name %s is found in the list.",ch);
    else
        printf("Name not found in array of given names.");
    return 0;
}
