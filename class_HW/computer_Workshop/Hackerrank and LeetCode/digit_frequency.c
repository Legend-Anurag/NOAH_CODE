// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100]; 
    char freq[10];
    scanf("%s", &str);
    int len = strlen(str);
    
    for (int i = 0; i < 10; i++)
    {
        freq[i] = 0;
    }
    
    for (int i = 0; i < len; i++) 
    {
        int x = str[i]-'0';
        if (x>=0 && x<=9) 
        {
            freq[x]++;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}