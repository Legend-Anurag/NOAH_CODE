/*We define S  to be a sequence of distinct sequential integers from 1 to n ; 
in other words S={1,2,3,….n}, . 
We want to know the maximum bitwise AND value of any two integers,  
a and b (where a<b ), in sequence S  that is also less than a given integer, k .

Complete the function in the editor so that given n  and k , it returns the maximum a&b<k .
*/

#include<stdio.h>

int MaxLessThanK(int n,int k) 
{
    int max = 0, a, b, num;
    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            num = (a & b);

            (num < k && num > max) && (max = num);
        }
    }
    return max;
}

int main()
{
    int n, k, ans;
    printf("Enter the value of n and k");
    scanf("%d %d", &n, &k);
    ans=MaxLessThanK(n,k);
    printf("%d", ans);
    return 0;
}