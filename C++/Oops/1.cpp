#include<bits/stdc++.h>
using namespace std;

// Object Oriented programming (OOP) is a programming paradigm that relies on the concept of 
// classes and objects. It is used to structure a software program into simple, reusable pieces 
// of code blueprints (usually called classes), which are used to create individual instances 
// of objects.

// Classes
// In a nutshell, classes are essentially user defined data types. Classes are where we create a 
// blueprint for the structure of methods and attributes. Individual objects are instantiated, or
//  created from this blueprint.

// Classes contain fields for attributes, and methods for behaviors. In our Dog class example, 
// attributes include name & birthday, while methods include bark() and updateAttendance().

class Employee{
    public:
    
    // attributes
    string name;
    int id;
    float salary;

    // methods

    // member function inside class
    // printname is defined inside class definition
    void printname(){
        cout<<"The employee name is : "<< name<<endl;
    }

    // printid is not defined inside class definition
    void printid();


};

// member function outside class
void Employee::printid(){
    cout<<"the employee id is : "<<id;
}
/* here :: is the scope resolution operator
 Note that all the member functions defined inside the class definition are by default inline, but you can also 
 make any non-class function inline by using keyword inline with them. Inline functions are actual functions, which 
 are copied everywhere during compilation, like pre-processor macro, so the overhead of function calling is reduced.*/

/* Remember the class is a template for modeling a dog, and an object 
 is instantiated from the class representing an individual real world thing.*/

int main()
{
    Employee obj1;
    /*instantiating an object here constructor will be called for this object and memory will be allocated in the 
    scp(fullform?) and the memory is released when the scope of the object ends(destructor is called when the scope)
    of object ends */
    obj1.name = "Aman";
    obj1.id = 1;
    obj1.printname();
    obj1.printid();
    
    return 0;
}