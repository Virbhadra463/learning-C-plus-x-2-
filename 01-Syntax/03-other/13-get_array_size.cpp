#include <iostream>
using namespace std;

int main() {
    int myNums[5] = {10,20,30,40,50};
    cout << sizeof(myNums) <<" byte"; //4 bytes * 5 elements
    
    int getArrayLength = sizeof(myNums)/ sizeof(myNums[0]);
    cout << "\nelements in array are: "<< getArrayLength << "\n";
    
    // Loop Through an Array with sizeof()
    for (int i = 0; i < sizeof(myNums) / sizeof(myNums[0]); i++) {
        cout << myNums[i] << "\n";
    }
    return 0;
}

