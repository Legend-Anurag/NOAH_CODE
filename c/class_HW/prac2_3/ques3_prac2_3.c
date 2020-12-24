/*  
You store name of your friends in string array. 
You are given task to print name of your friend whose name start with particular character 
and after you find first name in the list you have stop searching and 
print name you search in the list.
*/

/* Code for P3*/
#include <stdio.h>
int main()
{
	char name[30][15];
    char ch;
    int i,n,found=0;
    
    printf("Enter how many names you want to enter:");
    scanf("%d",&n);
    printf("Enter names of %d friends:",n);
    
    for (i=0;i<n;i++)
        scanf("%s",name[i]);
	    printf("Names are: ");
        
    for (i=0;i<n;i++)
        printf("%s\n",name[i]);  // display string
        printf("\nEnter first character of Name to be Searched: ");
        scanf(" %c",&ch);
    for(i=0;i<n;i++)
    {
        if(name[i][0]==ch)
        {
            found=1;
            break;
        }
    }
    if(found!=0)
        printf("Name with first character %c is: %s",ch,name[i]);
    else
        printf("Name not found in array of given names");
    return 0;
}
