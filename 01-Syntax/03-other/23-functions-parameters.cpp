/*
Information can be passed to functions as a parameter. Parameters act as variables inside the function.
Parameters are specified after the function name, inside the parentheses. 
You can add as many parameters as you want, just separate them with a comma:
*/

#include <iostream>
using namespace std;

void myFunction(string fname, 
    string country = "India"); // default/optional parameter

int main() {
    myFunction("Vir");
    myFunction("Luke");
    return 0;
}

void myFunction(string fname, string country){
    cout << "Name: " << fname << ", Country: " << country << "\n";
}
/*
When a parameter is passed to the function, 
it is called an argument. So, from the example above: fname is a parameter, 
while Vir and Luke are arguments.
*/