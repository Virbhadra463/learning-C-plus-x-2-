//Fixed Size (Arrays) vs. Dynamic Size (Vectors)

// size of an array in C++ is fixed, meaning you cannot add or remove elements after it is created.
// #include <iostream>
// using namespace std;

// int main() {
//     // An array with 3 elements
//     string cars[3] = {"Volvo", "BMW", "Ford"};

//     // Trying to add another element (a fourth element) to the cars array will result in an error
//     cars[3] = "Tesla";
//     return 0;
// }


/*
For operations that require adding and removing array elements, 
C++ provides vectors, which are resizable arrays.
The size of a vector is dynamic, meaning it can grow and shrink as needed.
Vectors are found in the <vector> library, and they come with many useful functions to add, remove and modify elements:
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // A vector with 3 elements
    vector<string> cars = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    cars.push_back("Tesla");
    cout << cars[3];
    return 0;
}

