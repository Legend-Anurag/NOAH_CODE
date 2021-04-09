/* Practical 2.1
Ram,Mohan and Sohan took loan of Rs. x, y and z on rate of interest r%, p%, q% for 
time t1, t2 and t3 years respectively. 
Calculate simple interest they will pay and find who will pay the most using ternary operator?
*/

//Code for P1
#include<stdio.h>
int main()
{
    int x,y,z;
    float p,q,r;
    float t1,t2,t3;
    float s1,s2,s3;

    printf("Enter Ram's amount of loan rate and time \n");
    scanf("%d%f%f",&x,&p,&t1);

    printf("Enter Mohan's amount of loan rate and time \n");
    scanf("%d%f%f",&y,&q,&t2);
    printf("Enter Sohan's amount of loan rate and time \n");
    scanf("%d%f%f",&z,&r,&t3);

    s1=(p*x*t1)/100;
    s2=(q*y*t2)/100;
    s3=(r*z*t3)/100;

    printf("Ram pay interest=%f\n",s1);
    printf("Mohan pay interest=%f\n",s2);
    printf("Sohan pay interest=%f\n",s3);
    printf("Maximum interest paid by :");

    s1>s2?(s1>s3?printf("Ram"):printf("Sohan")):(s2>s3?printf("Mohan"):printf("Sohan"));
    return 0;
}
