#include<iostream>
using namespace std;

class demo
{
private:
    int x,y;
public:
    demo()
    {
        x=0;
        y=0;
    }
    demo(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
    void operator-()
    {
        x=-x;
        y=-y;
    }
};

int main()
{
    demo obj(-10,20);
    obj.show();
    -obj;
    obj.show();

}

