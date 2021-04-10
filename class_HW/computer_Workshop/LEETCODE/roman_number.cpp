/*Question
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
*/

#include<iostream>
#include<string>
#include <cstring>
using namespace std;

class Solution {
    int narr[7]={1,5,10,50,100,500,1000};
    char Rarr[8]="IVXLCDM";

    public:
    Solution(string s)
    {
        //Displaying each characters of char_arr
        /*
        for(i=0;i<5;i++)
        {
            cout << char_arr[i];
        }
        */
    }

    void romanToInt(string s)
    {
        int i,j,len,k;
        char char_arr[s.size()];
        strcpy(char_arr, s.c_str());

        len=sizeof(char_arr);
        cout<<"eLEMENTS IN CHAR ARR "<<endl;
        for(i=0;i<len;i++)
        {
            cout <<char_arr[i];
        }
        cout<<"eLEMENTS IN Roman ARR "<<Rarr<<endl;
        cout<<"Length"<<len<<endl;
        int sum=0;
        for(i=0;i<=6;i++)
        {
            cout<<i<<"element of rarray"<<Rarr[i]<<endl;
            for(j=0;j<len;j++)
            {
                cout<<j<<"element of char_Arr"<<char_arr[j]<<endl;
                if(Rarr[i]==char_arr[j])
                {
                    cout<<Rarr[i]<<"  In R array"<<endl;
                    cout<<char_arr[j]<<"  In char array"<<endl;

                    sum+=narr[i];
                    cout<<sum<<endl;
                }
            }    
        }
        cout<<"The number is: "<<sum<<endl;
    }
};

int main()
{
    string inp;
    int ans;
    cin>>inp;
    Solution s1(inp);
    s1.romanToInt(inp);
    //ans=s1.romanToInt(inp);
    //cout<<ans;
    return 0;
}