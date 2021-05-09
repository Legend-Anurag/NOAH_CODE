#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,sq,temp_num=0,count=0;
    cin>>n;
    while(true)
    {
        int digit = n%10;
        n /= 10;

        cout<<"Digit: "<<digit<<n<<endl;

        sq=pow(digit,2);
        cout<<"sq of "<<digit<<" is "<<sq<<endl;
        count++;
        temp_num+=sq;
        cout<<"temp num"<<temp_num<<endl;

        n=temp_num;
        cout<<"New num "<<n<<endl;
        
        if(count==4)
        {
            break;
        }
    }
}