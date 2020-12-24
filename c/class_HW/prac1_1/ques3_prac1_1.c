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
    int d;
    printf("Enter distance traveled in kms\n");
    scanf("%d",&d);

    float t,speed_car;
    printf("Enter time in mins lost by the train while stopping at stations\n");
    scanf("%f",&t);

    speed_car = (float)(60*d)/(3*t);
    printf("Speed of car :- %f\n", speed_car);
    return 0;
}