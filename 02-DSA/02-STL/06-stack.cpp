// A stack stores multiple elements in a specific order, called LIFO.
// Last In, First Out.

/*
Unlike vectors, elements in the stack are not accessed by index numbers. 
Since elements are added and removed from the top, 
you can only access the element at the top of the stack.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // stack<int> num = {1,2,3,4,5}; //cannot do this
    stack<int> num;
    
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    num.push(5);

    cout << num.top() << "\n";
    
    num.top() = 6;
    cout << num.top()<< "\n";
    
    num.pop();
    cout << num.top()<< "\n";
    
    cout << num.size()<< "\n";
    
    cout << num.empty()<< "\n"; // 1 = empty, 0 = not empty
    return 0;
}


