// C++ program to demonstrate constructors
 
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int id;
     
    //Default Constructor
    Geeks()
    {
        cout << "Default Constructor called" << endl;
        id=-1;
    }
     
    //Parameterized Constructor
    Geeks(int x)
    {
        cout << "Parameterized Constructor called" << endl;
        id=x;
    }
};
// A Copy Constructor creates a new object, which is exact copy of the existing object. The compiler provides a default Copy Constructor to all the classes.
// Syntax:

// class-name (class-name &){}

// Geeks (Geeks &){

// }

int main() {
     
    // obj1 will call Default Constructor
    Geeks obj1;
    cout << "Geek id is: " <<obj1.id << endl;
     
    // obj1 will call Parameterized Constructor
    Geeks obj2(21);
    cout << "Geek id is: " <<obj2.id << endl;
    return 0;
}