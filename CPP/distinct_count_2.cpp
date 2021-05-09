#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, max_count=1;
    cout<<"Enter the count of the numbers: "<<endl;
    cin>>s;
    int arr[s], count=1;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<s; i++)
    {
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;
    int high=arr[0];
    
    sort(arr, arr+n);
    cout<<"Sorted Array: ";
    for(int i=0; i<s; i++)
    {
        cout<<arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            cout<<"count equal "<<count;
        }

        else
        {
            if(count>max_count)
            {
                high=arr[i];
                max_count=count;
            }
            count=1;
        }
        cout<<"\n";
    }
    if (count>max_count)
    {
        max_count=count;
        high = arr[n - 1];
    }

    cout<<"\nMax Count: "<<max_count;
    cout<<"\n Most frequent number: "<<high;
    return 0;
}