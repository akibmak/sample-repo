#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    string name;
    int id ;
    float salary;
//inside class
    void printname(){
        cout<<"employee name is : "<<name<<endl;
    }
    void printid();




};

void Employee :: printid(){
    cout<<"The id :"<<id;
}



int main()
{
    Employee obj1;
    obj1.name = "Akib";
    obj1.id = 1;
    obj1.printname();
    obj1.printid();
    //scp-string constant pool.

    
    return 0;
}