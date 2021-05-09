#include<iostream>
using namespace std;

class Test
{
    int x;
    public:
    void sample(int x)
    {
        this->x=x;
    }

    void show()
    {
        cout<<x;
    }
};

int main()
{
    int num;
    cin>>num;
    Test t1;
    t1.sample(num);
    t1.show();
    return 0;
}