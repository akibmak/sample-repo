//Scope Resolution Operator
//4.In case of multiple inheritance
#include<bits/stdc++.h>
using namespace std;

class A{
    protected:
    int x;
    public:
    A(){
        x=10;
    }
};

class B{
    protected:
    int x;
    public:
    B(){
        x=20;
    }
};

class C: public A, public B{
    public:
    void fun(){
        cout << "value of x in class A is : "<< A::x<<endl;
        cout << "value of x in class B is : "<< B::x<<endl;
    }
};

int main()
{
    C c;
    
    c.fun();
    
    return 0;
}