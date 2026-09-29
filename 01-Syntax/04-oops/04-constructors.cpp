/*
A constructor is a special method that is automatically called when an object of a class is created.
*/


#include <bits/stdc++.h>
using namespace std;

// To create a constructor, use the same name as the class, followed by parentheses ():
class myClass{
    public:
        myClass(){                  // constructor
            cout << "Hello_World";
        }
};

// Constructor with Parameters
// Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
class Car{
    public:
        string brand;
        string model;
        int year;
    Car(string x, string y, int z){         // Constructor with Parameters
        brand = x;
        model = y;
        year = z;
    }
};


int main() {
    myClass myObj1;

    Car myObj2("Bmw", "X5", 1999);

    cout << myObj2.brand << " " << myObj2.model << " " << myObj2.year << "\n";
    return 0;
}