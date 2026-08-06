// Numeric Types

#include <iostream>
using namespace std;

int main() {
    int myNum = 10000;
    cout << myNum;

    float myFloat = 67.99;
    cout << "\n" << myFloat;
    
    double myDouble = 67.7777777777777777777993343412477;
    cout << "\n" << myDouble; // by default, cout prints only 6 significant digits.
    return 0; // include <iomanip> to print more numbers
}

/*
float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point. 
The precision of float is only six or seven decimal digits, 
while double variables have a precision of about 15 digits. 
Therefore it is safer to use double for most calculations.
*/