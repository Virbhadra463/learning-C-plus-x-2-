/*
Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem, 
by breaking it down into smaller subproblems until it reaches a base case that stops further calls.
*/

// https://takeuforward.org/recursion/introduction-to-recursion-understand-recursion-by-printing-something-n-times

#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1); // Recursion is the technique of making a function call itself.
  } else {
    return 0;
  }
}

void countdown(int n){
    if ( n > 0 ){
        cout << n << "\n";
        countdown(n-1);
    }
}

int fact(int i){
    if (i>1){
        return i * fact(i-1);
    }
    else{
        return 1;
    }
}

int main() {
    int result = sum(10);
    cout << result;

    countdown(10);

    cout << fact(5);
    return 0;
}