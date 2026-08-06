//When you know exactly how many times you want to loop through a block of code, 
//use the for loop

/*
Syntax
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i=1; i < 5; i++){
        cout << i << "\n";
    }

    //nested for loop
    for (int i=1; i<=2; i++){
        cout << "Outer: " << i << "\n";

        for (int j = 1; j <=3; j++){
            cout << "Inner: " << j << "\n";
        }
    }

    //"for-each loop" (also known as ranged-based for loop), which is used to loop through elements 
    //in an array (or other data structures):
    // for (type variableName : arrayName) {}
    int myNumbers[5] = {10,20,30,40,50};
    for (int num : myNumbers){
        cout << num << "\n";
    }

    string word = "Hello";
    for (char c : word){
        cout << c << "\n";
    }
    return 0;
}