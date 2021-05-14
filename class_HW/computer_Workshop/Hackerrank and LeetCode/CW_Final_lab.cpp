// Given a five digit integer, 85696, print the sum of its digits
/* NAME: Anurag Yadav
   UID: 20BCS5427
*/

#include <stdio.h>

int main()
{
    int n, mod, ans=0;
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