#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    printf("Enter the int values ");
    scanf("%d %d", &a, &b);
    printf("Enter the float values ");
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", c+d, c-d);

    return 0;
}