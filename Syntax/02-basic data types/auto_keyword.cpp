// The auto keyword automatically detects the type of a variable based on the value you assign to it.
#include <iostream>
using namespace std;

int main() {
    auto x = 5; // x is automatically treated as int
    return 0;
}
/*
Important Notes
auto only works when you assign a value at the same time (You can't declare auto x; without assigning a value)
Once the type is chosen, it stays the same. 
*/