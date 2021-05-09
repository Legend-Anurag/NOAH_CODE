#include <iostream>
using namespace std;

class merge
{
    public:
    int* create_arr1(int n1)
    {
        int A[n1];
        cout << "\nEnter the elements of First array:\n";
        for (int i = 0; i < n1; i++)
        {
            cin >> A[i];
        }
        int *farr1=A;
        return farr1;
    }

    int* create_arr2(int n2)
    {
        int B[n2];
        cout << "\nEnter the elements of Second array:\n";
        for (int i = 0; i < n2; i++)
        {
            cin >> B[i];
        }
        int *farr2=B;
        return farr2;
    }

    void merge_arr(int arr1[], int arr2[],int n1, int n2)
    {
        int n3=n1+n2;
        int C[n3];
        cout<<"\nElements of Array After Merge: ";
        for(int i=0;i<n3;i++)
        {
            C[i]=arr1[i];
            C[i+n1]=arr2[i];
        }

        for(int i=0;i<n3;i++)
        {
            cout<<C[i];
        }
    }
};

int main()
{
    int s1,s2, *arr1=new int, *arr2=new int;
    cout<<"Enter the size of both array: ";
    cin>>s1>>s2;
    merge m;
    arr1=m.create_arr1(s1);
    arr2=m.create_arr2(s2);
    cout<<"\n\n HI"<<endl;
    for(int i=0;i<s1;i++)
    {
        cout<<arr1[i]<<endl;
    }
    m.merge_arr(arr1, arr2, s1, s2);

    return 0;
}