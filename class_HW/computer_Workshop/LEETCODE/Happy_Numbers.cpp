/*
https://leetcode.com/problems/happy-number/
Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

Example 1:
Input: n = 19
Output: true

Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

Example 2:
Input: n = 2
Output: false
*/

#include <bits/stdc++.h>
using namespace std;
int SumOfSquNum(int givno)
{
    int SumOfSqr = 0;
    while (givno)
    {
        SumOfSqr += (givno % 10) * (givno % 10);
        givno /= 10;
    }
    return SumOfSqr;
}
bool checkHappy(int chkhn)
{
    int slno, fstno;
    slno = fstno = chkhn;
    do
    {
        slno = SumOfSquNum(slno);
        fstno = SumOfSquNum(SumOfSquNum(fstno));
        cout<<"slno"<<slno<<endl;
        cout<<"fstno"<<fstno<<endl;

    }
    while (slno != fstno);
    return (slno == 1);
}
int main()
{
int hyno;
 cout << "\n\n Check whether a number is Happy number or not: \n";
 cout << " ---------------------------------------------------\n";
 cout << " Input a number: ";
 cin >> hyno;

    if (checkHappy(hyno))
        cout << hyno << " is a Happy number\n";
    else
        cout << hyno << " is not a Happy number\n";
}