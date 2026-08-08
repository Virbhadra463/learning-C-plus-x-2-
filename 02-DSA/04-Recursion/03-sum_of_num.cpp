#include <bits/stdc++.h>
using namespace std;

int bruteForce(int n){
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    
    return sum;
    /*
    Complexity:
        Time  → O(n) : the loop runs from 1 to n.
        Space → O(1) : only a fixed number of variables are used.
    */
}

int usingFormula(int n){
    return (n*(n+1))/2;
    /*
    Complexity:
    Time  → O(1) : only a fixed number of arithmetic operations.
    Space → O(1) : only the parameter and temporary arithmetic values are used.
    */
}


int recursive(int n){
    if ( n == 0 ){
        return 0;
    }
    
    return n + bruteForce(n-1);
    /*
    Complexity:
        Time  → O(n) : one recursive call is made for each value from n to 0.
        Space → O(n) : n recursive calls are stored on the call stack.
    */
}

int main() {
    cout << bruteForce(153) << "\n";
    cout << usingFormula(153) << "\n";
    cout << recursive(153) << "\n";
    return 0;
}