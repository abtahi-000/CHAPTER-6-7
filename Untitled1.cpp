#include<iostream>
using namespace std;

class constructor
{
private:
    int x,y;
public:
    constructor()
    {
        x=0;
        y=0;
    }
    constructor(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }

    ~constructor()
    {
        cout<<"Destructor is called"<<endl;
    }

};

int main()
{
   // constructor obj1;
    constructor obj2(10,20);
    obj2.show();

}
