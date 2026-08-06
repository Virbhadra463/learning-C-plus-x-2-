/*
Arrays are used to store multiple values in a single variable, 
instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the nam
and specify the number of elements it should store:

*/

#include <iostream>
using namespace std;

int main() {
    string name[3] = {"Vir", "rahul", "neha"};
    cout << name[1] << "\n";
    
    name[1] = "ramesh"; // change value
    cout << name[1] << "\n";

    for (int i = 0; i < 3; i++) {
        cout << name[i] << "\n";
    }
    return 0;
}