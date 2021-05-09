#include<iostream>
#include<iomanip>
using namespace std;

int sq(int num)
{
    int sum=0;
    sum+=(num%10)*(num%10);
    num/=10;
    return sum;
}

bool chk(int check_n)
{

    int single_sq, double_sq;
    single_sq=double_sq=check_n;

    do{
    single_sq=sq(single_sq);
    double_sq=sq(sq(double_sq));
    }
    while(single_sq!=double_sq);
    
    return(single_sq==1);
}

int main()
{
    int n;
    string ans;
    cout<<"Enter the number to check: "<<endl;
    cin>>n;
    ans=chk(n)?"True":"False";
    cout<<ans<<endl;
    return 0;
}