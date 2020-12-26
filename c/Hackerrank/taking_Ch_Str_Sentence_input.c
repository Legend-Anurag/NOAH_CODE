#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[100];
    char sen[100];
    printf("char ");
    scanf("%c", &ch);
    printf("string ");
    scanf("%s", str);
    printf("sentence ");
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("\n%c", ch);
    printf("\n%s", str);
    printf("\n%s", sen);
    return 0;
}