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
    friend demo operator+(demo &ob,demo &ob1);
//    {
//        demo temp;
//        temp.a=a+obj.a;
//        temp.b=b+obj.b;
//        return temp;
//    }

};
 demo operator+(demo &ob,demo &ob1)
    {
        demo temp;
        temp.a=ob.a+ob1.a;
        temp.b=ob.b+ob1.b;
        return temp;
    }


int main()
{
    demo obj1(100,10);
    demo obj2(20,30);
    demo obj3;
    obj3=obj1+obj2;
    obj3.show();

}

