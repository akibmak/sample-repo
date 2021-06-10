#include<iostream>
using namespace std;
class Car
{
    private: 
    int speed;
    char color[20];
    public:
    Car()
    {
        // speed=57;
        // color[20]="red"
        cout<<"constructor created "<<endl;
    }
    ~Car()
     {
       
        cout<<"constructor destroyed"<<endl;
    }
};
int main()
{
    Car *c=new Car; //dynamically creating object
    delete c;   //destroying object
    Car *c1=new Car[5];//dynamically creating array project
    delete[] c1;// destroying array object
    
}