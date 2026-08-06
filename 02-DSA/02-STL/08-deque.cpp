// in queue elements are added at the end and removed from front
// deque stands for Double-ended queue, elements can be added and removed from the both end
// you can access elements by index numbers unlike stack and queue

#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> num= {1,2,3,4,5}; // can add elements at the time of declaration.

    for(int n : num){
        cout << n << ",";
    }
    cout << "\n";

    cout << num.front() << "\n";
    cout << num.back() << "\n";

    num.push_front(0);
    num.push_back(6);
    cout << num[2] << "\n";


    num.pop_front();
    num.pop_back(); 

    cout << num.size() << "\n"; //size of deque
    
    cout << num.empty(); 
    return 0;
}