/* WAP to create a class that will maintain the records of person with details (Name and Age) and find the eldest among them. 
The program must use this pointer to return the result by overloading> operator among two objects.
*/

#include<iostream>
using namespace std; 

class details
{
    int age;
    string name;
    public:
    
    void values()
    {
        cout<<"Enter name: ";
        cin>>name;
        
        cout<<"Enter age: ";
        cin>>age;
    }

    
    details operator>(details p)
    {
        if(p.age > age)
        {
            return p;
        }
        
        else
        {
            return *this;
        }
    }

    void display()
    {
        cout<<"\n---------------------------------------------"<<endl;
        cout<<"The eldest person is "<<name<<" having age "<<age;
    }
}; 

int main()
{
    details p1,p2,p3;
    p1.values();
    p2.values();
    p3.values();

    details d1;
    d1 = p1>p2>p3;
    d1.display();
    return 0;
}