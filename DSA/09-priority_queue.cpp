/*
A priority queue is a data structure in which each element has a priority, and the element with 
the highest priority (or lowest, in a min-heap) is removed first, 
regardless of the order in which it was inserted.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> num; // cannot assign elements while declaration
    num.push(1);
    num.push(5);
    num.push(20);
    num.push(90);
    num.push(60);
    
    cout << num.top() << "\n";
    
    num.pop();
    
    // min heap
    priority_queue<int, vector<int>, greater<int>> num2;
    num2.push(1);
    num2.push(5);
    num2.push(20);
    num2.push(90);
    num2.push(60);
    
    cout << num2.top() << "\n";



    return 0;
}
