// Structures (also called structs) are a way to group several related variables into one place.

// Each variable in the structure is known as a member of the structure.

// Unlike an array, a structure can contain many different data types: int, string, bool, etc.

#include <iostream>
using namespace std;

int main() {
    struct{
        int myNum;
        string myString;
    }myStructure;

    myStructure.myNum = 67;
    myStructure.myString="Hello World!";

    cout << myStructure.myNum;
    cout << "\n";
    cout << myStructure.myString;

    struct{
        string brand;
        string model;
        int year;
    }myCar1, myCar2; //you can assign one struct to many variables

    myCar1.brand = "BMW";
    myCar1.model = "XS";
    myCar1.year = 1999;

    myCar2.brand = 'Ford';
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    
    //Named Structures
    /*
    By giving a name to the structure, you can treat it as a data type. 
    This means that you can create variables with this structure anywhere in the program at any time.
    */
    
    struct car{
        string brand;
        string model;
        int year;
    };

    car myCar3;
    myCar3.brand = "Ford";
    myCar3.model = "Mustang";
    myCar3.year = 1969;
    
    cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << "\n";  
    return 0;
}