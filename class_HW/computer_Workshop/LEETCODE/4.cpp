#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    char Rarr[8]="IVXLCDM";
    int x =distance(Rarr, find(Rarr, Rarr + 7, "I"));
    cout<<x;

    return 0;
}