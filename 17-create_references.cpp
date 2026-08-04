//A reference variable is an alias for an existing variable. It is created using the & operator:

#include <iostream>
using namespace std;

int main() {
    string food = "piiza\n";
    string &meal = food;

    cout << food;
    cout << meal; // same output
//  Both food and meal refer to the same memory location. Changing one affects the other.

    meal = "Burger"; // changes both meal and food

    cout << food << "\n"; 
    cout << meal << "\n"; 
    return 0;
}