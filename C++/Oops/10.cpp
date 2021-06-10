//Scope Resolution Operator
//3.to access a class's static variables.
//scope and lifetime
#include<bits/stdc++.h>
using namespace std;

class A{
    static int x;//memory allocate only once and its lifetime will be till the program ends.
    public :
    static int y;


    void fun(int x){
        cout <<"Value of static x is "<<A::x<<endl;
        cout <<"Value of local x is "<<x;
    }
};

//in c++ static members must be explicitly defined like this.
int A::x = 1;
int A::y = 2;

int main()
{
    A a;
    int x = 3;
    a.fun(x);

    cout << "\nA::y = "<<A::y;
    return 0;
}