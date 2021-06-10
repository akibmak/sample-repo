#include<bits/stdc++.h>
using namespace std;

class A {
    private:
    int a ;
    protected:
    int x ;
    public:
    int aa;
    A(){
        a=10;
        x=10;
        aa=10;

        cout<<"Constructor A"<<endl;
    }
     void show(){
        cout<<"the value of A is "<<aa<<endl;
    }
};

class B {
    private:
    int b;
    protected:
    int y;
    public:
    int bb;
    B(){
        b=20;
        y=20;
        bb=20;
        cout<<"Constructor B"<<endl;
    }
     void show(){
        cout<<"the value of B is "<<bb<<endl;
    }
};

class C : public A , public B{
    private:
    int c;
    protected:
    int z;
    public:
    int cc;
    
    C(){
        c=30;
        z=30;
        cc=30;
        cout<<"Constructor C"<<endl;
    }
    void show(){
        cout<<"the value of C is "<<cc<<endl;
    }

    void  Add(){
        
        cout << "Result :"<<z+y+x<<endl;
    }
};

class D : public C{
    public:
    D(){

        cout<< "Constructor D"<<endl;
    }
};


int main()
{
    C c;
    c.cc = 1;
    c.bb= 2;
    c.aa = 3;
    
    c.A::show();
    c.B::show();
    c.show();

    c.Add();

    return 0;
}