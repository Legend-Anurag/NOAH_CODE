#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<((n==1)?"one":n==2?"two":n==3?"three":n==4?"four":n==5?"five":n==6?"six":n==7?"seven":n==8?"eight":n==9?"nine":"Greater than 9");
    return 0;
}