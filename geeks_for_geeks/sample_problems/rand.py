"""
Given a number N, find the smallest number which can be obtained by rearranging the digits of N. 
The generated number should not have any leading zeroes.
"""

#User function Template for python3


class Solution:
    def smallestnum (self,N):
        # code here 
        sol=sorted(str(N))

        for i,n in enumerate(sol): 
            if n != '0': 
                tmp = sol.pop(i) 
                break
        
        return str(tmp) + ''.join(sol)
        

        
        
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = input()
        ob = Solution()
        ans = ob.smallestnum(N)
        print(ans)

# } Driver Code Ends