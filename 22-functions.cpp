/*
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
*/

#include <iostream>
using namespace std;

// Function declaration
void myFunction();

// the main method
int main() {
    myFunction();
    myFunction();
    return 0;
}

// function definition
void myFunction(){
    cout << "I just got executed.";
}