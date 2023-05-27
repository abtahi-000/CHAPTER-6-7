#include<iostream>
using namespace std;

class demo
{
private:
    int a,b;
public:
    demo()
    {
        a=0;
        b=0;
    }
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    show()
    {
        cout<<a<<" "<<b<<endl;
    }
   bool operator==(demo obj)
    {
         if(a==obj.a)
         {
             return true;
         }
         else
         {
             return false;
         }
//        demo temp;
//        temp.a=a+obj.a;
//        temp.b=b+obj.b;
//        return temp;
    }

};

int main()
{
    demo obj1(220,30);
    demo obj2(20,30);
    if(obj1==obj2)
    {
        cout<<"equal"<<endl;
    }
    else
    {
        cout<<"Not"<<endl;
    }

    return 0;
}
