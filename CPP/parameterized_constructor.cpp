//WAP TO ADD, subtract, and multiply of two numbers using parameterized constructor.
#include<iostream>
using namespace std;

class code
{
    private:
    int a,b;
    
    public:
    
    code(int x, int y)
    {
       a=x;
       b=y;
    }
    
    int sum()
    {
        return(a+b);
    }
    
    int diff()
    {
        return(a-b);
    }
    
    int mul()
    {
        return(a*b);
    }
};

int main()
{
    int n1,n2;
    cout<<"--------- Using parameterized constructor ---------"<<endl;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    code A(n1,n2);
    cout<<"Addition is "<<A.sum()<<endl;
    cout<<"Subtraction is "<<A.diff()<<endl;
    cout<<"Multiplication is "<<A.mul()<<endl;
    return 0;
}
