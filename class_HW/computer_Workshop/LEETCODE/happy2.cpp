#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;

    while(true)
    {
        int digit = n%10;
        n /= 10;
        cout<<digit<<endl;

        count++;
        cout<<count;
    }
    return 0;
}