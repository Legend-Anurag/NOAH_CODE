#include <stdio.h>
int main()
{
    int i, j, a, n, number[30];
    printf("Enter the value of N \n");
    scanf("%d", &n);
 
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
            //Checking each number subsequently
            if (number[i] > number[j]) 
            {
                //Swapping the number if condition is satisfied

                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

        //Printing the numbers in ascending order
        printf("The numbers arranged in ascending order are \n");
        for (i = 0; i < n; ++i)
            printf("%d\t", number[i]);

    return 0
}