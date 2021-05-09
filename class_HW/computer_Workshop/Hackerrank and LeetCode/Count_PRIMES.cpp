/*
https://leetcode.com/problems/count-primes/

Count the number of prime numbers less than a non-negative number, n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:
Input: n = 0
Output: 0

Example 3:
Input: n = 1
Output: 0
*/

#include<iostream>
using namespace std;

class Solution {
public:
    int i,j,m,count=0;
    int countPrimes(int n) 
    {
        for(i=2;i<n;i++)
        {
            if(i%2!=0 || i==2)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    int n,ans;
    cin>>n;
    Solution s1;
    ans=s1.countPrimes(n);
    cout<<ans;
    return 0;
}