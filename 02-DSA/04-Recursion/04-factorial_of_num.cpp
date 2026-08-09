#include <bits/stdc++.h>
using namespace std;

void iterativeSolution(int n){
    int original = n;
    int i = 1;
    for(; i < original; i++){
        n = n * i;
    }
    cout << n;
    /*
    Complexity:
        Time  → O(n) : the loop runs from 1 to n-1.
        Space → O(1) : only a fixed number of variables are used.
    */
}

int recursiveSolution(int n){
    // base condition that if n == 0 then stop recursion call
    if(n == 0){
        return 1;
    }

    return n * recursiveSolution(n-1);
    /*
    Complexity:
        Time  → O(n) : the loop runs from 1 to n-1.
        Space → O(n) : n recursive calls are stored on the call stack.
    */
}


int main() {
    iterativeSolution(5);
    cout << "\n" << recursiveSolution(5);
    return 0;
}