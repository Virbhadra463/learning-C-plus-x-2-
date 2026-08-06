/*
Function overloading allows multiple functions to have the same name, 
as long as their parameters are different in type or number:
*/

#include <iostream>
using namespace std;

int plusfunc(int x, int y){
    return x+y;
}
int plusfunc(int x, int y, int z){
    return x+y+z; 
}
double plusfunc(double x, double y){ // same func name bcoz diff parameters
    return x+y;
}

int main() {
    
    int myNum = plusfunc(2,2);
    int myNum2 = plusfunc(2,2,2);
    int myDouble = plusfunc(2.5,2.5);

    cout << myNum;
    cout << "\n";
    cout << myNum2;
    cout << "\n";
    cout << myDouble;
    
    return 0;
}