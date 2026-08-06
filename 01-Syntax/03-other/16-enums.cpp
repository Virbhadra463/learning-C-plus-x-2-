//An enum is a special type that represents a group of constants (unchangeable values).
// Enum is short for "enumerations", which means "specifically listed".
/*
To create an enum, use the enum keyword, followed by the name of the enum,
 and separate the enum items with a comma:
*/
#include <iostream>
using namespace std;

int main() {
    enum Level {
        LOW,
        MEDIUM, //It is not required to use uppercase, but often considered as good practice.
        HIGH
    };

    enum Level2 {
        LOw =25,
        MEDIUm = 50,
        HIGh = 75
    };
    enum Level3 {
        LoW =25,
        MEDIuM, // 26
        HIgH // 27
    };



    // Create an enum variable and assign a value to it
    enum Level myVar = MEDIUM;
    enum Level2 myVar2 = MEDIUm;
    enum Level3 myVar3 = MEDIuM;

    // Print the enum variable
    cout << myVar; 
    cout << "\n";
    cout << myVar2; 
    cout << "\n";
    cout << myVar3; 
    return 0;
}

/*
Why And When To Use Enums?
Enums are used to give names to constants, which makes the code easier to read and maintain.

Use enums when you have values that you know aren't going to change, like month days, days, colors, deck of cards, etc.
*/