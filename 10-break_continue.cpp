/*
The continue statement breaks one iteration (in the loop), if a specified condition occurs, 
and continues with the next iteration in the loop.
*/
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        cout << "skipped\n";
        continue;
    }
    cout << i << "\n";
    }
  
    cout << "__________________________________" << "\n";
    // for each loop
    int myNums[5] = {1,2,3,4,5};

    for (int num : myNums){
        cout << num << "\n";
    }
    cout << "__________________________________" << "\n";

    //Omit Array Size
    /*
    you can decalre an aaray without specifying size of the array
    you can also declare array without specifying the elements
    */

    string cars[5]; // won't work if array size is not declared.

    cars[0] = "volvo";
    cars[1] = "tata punch";
    cars[2] = "mercedes";
    cars[3] = "bmw";
    cars[4] = "ford";
    return 0;

}
