// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int size, ans=0;
    scanf("%d", &size);

    int inp[size];
    for (int i=0; i<size; i++)
    {
        scanf("%d", &inp[i]);
    }
    
    for (int i=0; i<size; i++)
    {
        ans+=inp[i];
    }
    printf("%d",ans);
    
    return 0;
}
