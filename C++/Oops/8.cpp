//Scope Resolution Operator
#include<bits/stdc++.h>
using namespace std;

//1.to access a global variable when there is a local variable with same name.

int x = 2;// Global x

int main()
{
    int x=10; // Local x
    cout<<"the value of global x is "<< ::x<<endl;// :: is the scope resolotion operator
    cout<<"the value if local x is "<< x<<endl;
    
    return 0;
}