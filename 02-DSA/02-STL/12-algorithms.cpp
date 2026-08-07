//Algorithms are used to solve problems by sorting, searching, and manipulating data structures.
//The <algorithm> library provides many useful functions to perform these tasks with iterators.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Sorting ALgorithms
    vector<int> num ={1,2,8,4,9,3,6};
    // sort(num.begin(), num.end()); // for reverse sort use rbegin and rend.

    for (int n : num){
        cout << n << "\n";
    }
    
    cout << "___________";
    sort(num.begin()+3, num.end()); // comment upper one to use this    
    for (int n : num){
        cout << n << "\n";
    }

    // Searching Algorithms
    //find, upper bound and lower bound
    
    
    //modifying algo
    // copy()



    return 0;
}