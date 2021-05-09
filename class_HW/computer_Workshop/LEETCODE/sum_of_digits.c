// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, mod, i, ans=0;
    scanf("%d", &n);
    
    for (int i=0; i<5; i++)
    {
        mod=n%10;
        n=n/10;
        ans+=mod;
    }
    printf("%d",ans);
    
    return 0;
}
