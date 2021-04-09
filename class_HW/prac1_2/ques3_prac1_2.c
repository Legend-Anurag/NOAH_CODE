/*
A train can travel 50% faster than a car. Both start from point A at the same time and 
reach point B, 75 kms away from A at the same time. 
On the way, however, the train lost about 12.5 minutes while stopping at the stations. 
Write a C program to compute the speed of car.
*/

//Code for P3
#include <stdio.h>
int main()
{ 
    int m, y, n, r;
    printf("Enter the values of m, y(1900<=y<=2019), n, r(1<=r<=12): ");
    scanf("%d %d %d %d",&m,&y,&n,&r);

    int y_o_b, class;
    y_o_b = y+m-n;
    printf("Mr. Kavi's Year of Birth is %d",y_o_b);

    if ( r <= 12 && r >= 1)
    {    
        class = r+n-m;
        if(class<1)
        {         
            printf("\nMr. Kavi is in Pre Primary");
        }
        else if (class>12)
        {
            printf("\nMr. Kavi is in College but class cannot be predicted.");
        }

        else
        {
            printf("\nMr. Kavi is in class %d", class);
        }  
        return 0;
    }
    else
    {
        printf("\nThe Value of r is outside the defined constraint!");
    }
    return 0;
}