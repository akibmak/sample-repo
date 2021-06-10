#include<bits/stdc++.h>
using namespace std;

class Employee{
    int id;
    string name;
    float salary;

    public:
    //by default private scope
    Employee(){
        id =1 ;
        name="Akib";
        salary=10000;
        cout<<"constructor1 initialised "<<endl;
    }

    Employee(int id){
        

        cout<<"constructor2 initialised "<<endl;
        cout<<"THe id is : "<<id<<endl;
    }

    Employee(int id, string name){
        id = 3 ;
        name = "palak";
        cout<<"constructor3 initialised "<<endl;
    }

    Employee(int id, string name, float salary){
        
        
        cout<<"constructor4 initialised "<<endl;
    }
//Destructor
    ~Employee(){
        cout<<"The destructor is called for id :"<<id<<endl;
    }


};

int main()
{
    Employee obj1(6);
    int i=0;

    while(i<6){
        Employee obj(i);
        i++;
    }//obj2 scope ends here
    
    
    return 0;

}//obj1 ends here