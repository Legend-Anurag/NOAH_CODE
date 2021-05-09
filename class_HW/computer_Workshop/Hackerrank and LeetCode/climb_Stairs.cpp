// https://leetcode.com/problems/climbing-stairs/

#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;

        int stair[2];
        stair[0] = 1;
        stair[1] = 2;
        for(int i=2;i<n;i++)
        {
            stair[i%2] = stair[0] + stair[1];
        }
        return stair[(n-1)%2];
    }
};

int main()
{
    int n, ways;
    cin>>n;
    Solution S1;
    ways=S1.climbStairs(n);
    cout<<ways;
}