#include <bits/stdc++.h>
using namespace std;
/*
Inheritance allows one class to reuse attributes and methods from another class. 
It helps you write cleaner, more efficient code by avoiding duplication.

We group the "inheritance concept" into two categories:

    derived class (child) - the class that inherits from another class
        base class (parent) - the class being inherited from

To inherit from a class, use the : symbol.
*/

// Base class
class Vehicle {
    public:                     // access specifier
    string brand = "Ford";      // attribute
    void honk(){                // func
        cout << "Tuut, tuut!\n";
    }
};

// Derived class
class Car : public Vehicle {
    public:
    string model = "Mustang";
};


int main() {
    Car myCar;
    myCar.honk();  // though car class didnt have honk func it derived it from base class
    return 0;
}

//Why And When To Use "Inheritance"?
// - It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class