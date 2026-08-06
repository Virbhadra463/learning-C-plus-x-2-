/*
Memory management is the process of controlling how much memory your program uses - 
and how it is used. This includes creating, using, and releasing memory 
when it's no longer needed.
*/
#include <iostream>
using namespace std;

int main() {
    int i = 10;
    cout << sizeof(i) << "\n" ; //outputs 4
    
    int* ptr = new int; // creates memory space for one integer
    *ptr = 35;
    cout << *ptr << "\n";  
    
    delete ptr; // deletes pointer
    cout << sizeof(i);
    /*
    If you forget to delete memory, your program will still run, 
    but it may use more and more memory over time.
    This is called a memory leak, and it can slow down or crash your program over time.
    */
    return 0;
}