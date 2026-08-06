// Variables are containers for storing data values.
/*
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
*/
/*
To create a variable, specify the type and assign it a value:
syntax:
type variableName = value;
*/ 
#include <iostream>
using namespace std;

int main (){
    int num = 67;
    cout << num;

    // can declare variable without assigning value
    double floatnum;
    floatnum = 13.11;
    cout << floatnum;

    cout << "\nmy fav number is " << num << " and i love it" << "\n";

    int x = 5;
    int y = 5;
    int sum = x+y;
    cout << sum;

    //Declare many variable
    x=7, y=6; // already declared int so cant do that here again
    int z=5;
    cout << "\n" << x+y+z;
    
    //one value to multiple variable
    x = y = z = 50;
    cout << "\n" << x+y+z;
    
    const int n = 15;
    cout << n;

    // n = 20; // this line will trhwo error
    
    return 0;
}
