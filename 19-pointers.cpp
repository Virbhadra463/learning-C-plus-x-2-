// A pointer however, is a variable that stores the memory address as its value.
/*
A pointer variable points to a data type (like int or string) of the same type, 
and is created with the * operator. The address of the variable you're working with is assigned to the pointer:
*/
#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n"; // ptr holds the value of food's memory address.
    
    // the * operator (the dereference operator
    cout << *ptr << "\n"; //Output the value of food with the pointer (Pizza)
    
    // modify pointer value
    *ptr = "Burger";
    cout << *ptr << "\n"; 
    cout << &food << "\n";
    cout << food << "\n";
    return 0;
}
/*
Tip: There are three ways to declare pointer variables, but the first way is preferred:

string* mystring; // Preferred
string *mystring;
string * mystring;
*/

/*
Note that the * sign can be confusing here, as it does two different things in our code:

When used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
*/