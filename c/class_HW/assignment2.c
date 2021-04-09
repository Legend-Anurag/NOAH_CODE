/* Q6---> Write a C program to find the GCD of two numbers.
#include <stdio.h>
int main()
{
    int num1, num2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i <= num1 && i <= num2; ++i)
    {
        // Checks if i is factor of both integers
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", num1, num2, gcd);

    return 0;
}
*/

/*Write a C language program to enter n elements in array and 
find second smallest number from an array.
*/

#include <stdio.h>

void main()
{
    int arr1[50],n,i,j=0,sml,sml2nd;
  
        printf("\n\nFind the second smallest element in an array :\n");
       printf("--------------------------------------------------\n");  
  
       printf("Input the size of array : ");
       scanf("%d", &n);
    /* Stored values into the array*/
       printf("Input %d elements in the array (value must be <9999) :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
/* find location of the smallest element in the array */		
   sml=arr1[0];
  for(i=0;i<n;i++)
  {
      if(sml>arr1[i])
	  {
           sml=arr1[i];
           j = i;
      }
  }

/* ignore the smallest element and find the 2nd smallest element in the array */		
   sml2nd=99999;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  /* ignoring the smallest element */
		  i--;
        }
      else
        {
          if(sml2nd>arr1[i])
	     {
               sml2nd=arr1[i];
             }
        }
  }

  printf("The Second smallest element in the array is :  %d \n\n", sml2nd);
}