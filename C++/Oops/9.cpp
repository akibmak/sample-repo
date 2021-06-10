//scope resolution operaotr
//2.to define a function outside the class.
#include<bits/stdc++.h>
using namespace std;

class Emp{
    public:
    void funIn(){
        cout<<"this is the function inside the class"<<endl;
    }
    void funOut();
    private:
    void show();

};


void Emp::funOut(){
    cout<<"this is the method outside the class.";
    show();
}
void Emp::show(){
    cout<<"private method"<<endl;
}
int main()
{
    Emp obj;
    obj.funIn();
    obj.funOut();

    
    
    return 0;
}