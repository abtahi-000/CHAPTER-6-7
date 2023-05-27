#include<iostream>
using namespace std;

class A
{
private:
    int x,y;
public:
    A(int a,int b)
    {
        x=a;
        y=b;
    }
    A(A &ref)
    {
        x=ref.x;
        y=ref.y;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }

};

int main()
{
    A obj1(10,20);
    A obj2=obj1;
    obj1.show();
    obj2.show();
    return 0;
}
