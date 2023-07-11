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
    }
    demo(int x)
    {
        a=x;
    }
    show()
    {
        cout<<a<<" "<<b<<endl;
    }
   bool operator!=(demo obj)
    {
         if(a!=obj.a)
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
    demo obj1(220);
    demo obj2(20);
    if(obj1!=obj2)
    {
        cout<<"not equal"<<endl;
    }
    else
    {
        cout<<"equal"<<endl;
    }

    return 0;
}
