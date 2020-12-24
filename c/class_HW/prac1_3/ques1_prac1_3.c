/*
In a class of n students the boys to girls ratio is p:q. 
Find no. boys and girls in the class and print :
1)If boys are more than or equal to 70% in the class then print gender partiality in education
2)If difference of boys are girls is diff and in range -5<=diff<=5 then print equal 
opportunities of education for both
3)If girls are more than equal to 70% then print girls dominating in education.
4)For all others cases print no conclusion drawn
*/

//Code for P1
#include <stdio.h>
int main()
{
    int n, p, q, boys,boysperc,girls,girlsperc,diff;
    printf("Enter the total number of students in the class\n");
    scanf("%d",&n);
    printf("Enter the ratio of boys to girls in the class\n");
    scanf("%d %d",&p,&q);

    boys = n * p / (p+q);
    girls = n - boys;
    boysperc = (boys *100/n);
    girlsperc = (girls *100/n);
    diff = boys - girls;

    printf("\nNumber of boys in the class= %d\nNumber of girls in the class= %d\n",boys,girls);
    printf("\nPercentage of boys in the class= %d\nPercentage of girls in the class= %d\n",boysperc,girlsperc);
    printf("\nDifference between girls and boys in the class is %d\n",diff);

    if (diff >= -5 && diff <=5)
        printf("Equal Oppotunities of education are there for both boys and girls\n");
    else if (boysperc>= 70)
        printf("There is gender partiality in education as boys percentage is %d\n",boysperc);
    else if(girlsperc>= 70)
        printf("Girls are dominating in education as girls percentage is %d\n",girlsperc);
    else
        printf("There is no conclusion drawn from the given stats\n");
    return 0;
}