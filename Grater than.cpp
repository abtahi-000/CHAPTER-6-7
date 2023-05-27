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
    demo(int x)
    {
        a=x;
    }
   bool operator>=(demo obj)
    {
         if(a>=obj.a)
         {
             return true;
         }
         else
         {
             return false;
         }
    }

};

int main()
{
    demo obj1(220);
    demo obj2(20);
    if(obj1>=obj2)
    {
        cout<<"grater"<<endl;
    }
    else
    {
        cout<<"Not"<<endl;
    }

    return 0;
}


