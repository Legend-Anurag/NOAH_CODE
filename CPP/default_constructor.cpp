//WAP TO ADD, subtract, and multiply of two numbers using default constructor.
#include<iostream>
using namespace std;

class code
{
    private:
    int a,b;
    
    public:
    
    code()
    {
       cout << "Enter two numbers: ";
       cin >> a >> b;
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
    cout<<"-------- Using default constructor --------"<<endl;
    
    code A;
    cout<<"Addition is "<<A.sum()<<endl;
    cout<<"Subtraction is "<<A.diff()<<endl;
    cout<<"Multiplication is "<<A.mul()<<endl;
    return 0;
}
