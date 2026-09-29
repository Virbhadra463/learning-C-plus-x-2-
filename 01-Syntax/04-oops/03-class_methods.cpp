/*
Class Methods:
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:
    Inside class definition
    Outside class definition
*/
#include <bits/stdc++.h>
using namespace std;

//  Method Inside the Class
class myClass{
    public:
        void myMethod(){                //Method/func defined inside the class 
            cout << "Hello World";
        }
};

//  Method Outside the Class
class myClass1{
    public:
    void myMethod();
};

void myClass1::myMethod(){              // Method/func defined inside the class 
    cout << "\n" << "Hello World";
}

// You can also pass values to methods just like regular functions:
class Car {
    public: 
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
    return maxSpeed;
}


int main() {
    myClass myObj;
    myObj.myMethod();
    
    
    myClass1 myObj1;
    myObj1.myMethod();
    
    Car myObj2;
    cout << myObj2.speed(200);
    
    return 0;
}