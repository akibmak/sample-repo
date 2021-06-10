#include<bits/stdc++.h>
using namespace std;

class Emp{
    public:
    int id;

    public:
    Emp(){
        cout<<"The constructor called for id : "<<id<<endl;
    }

    ~Emp(){
        cout<<"The destructor called for id : "<<id<<endl;
    }
};

int main()
{
     Emp obj1;
     obj1.id = 6;
    int i=0;

    while(i<6){
        Emp obj2;
        obj2.id = i;

        i++;
    }//obj2 scope ends here
    
    return 0;
}//obj1 scope ends here