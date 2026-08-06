#include <iostream>
using namespace std;

void swapNums(int &x, int &y); // pass ref
void myFunction(int myNums[5]); // pass arrays


struct Car {
    string brand;
    int year;
};

void myCar(Car c); // pass struct


int main() {
    int firstNum = 12;
    int secondNum = 13;
    
    swapNums(firstNum,secondNum);
    cout << firstNum << "\n" << secondNum << "\n";
    
    int myNums[5] = {10,20,30,40,50};
    myFunction(myNums);
    
    Car mycar = {"toyota", 1950};
    myCar(mycar);
    return 0;
}
void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}
void myFunction(int myNums[5]){
    for(int i = 0; i < 5; i++){
        cout << myNums[i] << "\n";
    }
}
void myCar(Car c){
    cout << c.brand << c.year;
}