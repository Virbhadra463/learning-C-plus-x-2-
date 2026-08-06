// A queue stores multiple elements in a specific order, called FIFO.
// First In, First Out.

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> num; // cannot add elements at the time of declaration.
    
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    num.push(5);
    
    cout << num.front() << "\n";
    cout << num.back() << "\n";

    num.front()=5;
    num.back()=1;

    num.pop(); // first elemt gets popped

    num.size(); //size of queue
    
    num.empty(); 
    return 0;
}