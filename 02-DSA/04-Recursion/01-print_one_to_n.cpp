#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if (i>n){
        return;
    }

    cout << i << ", ";
    print(i+1,n); // recursion call
/*  
    Complexity:
    Time  → O(n) : the function is called n times, from n down to 1.
    Space → O(n) : each recursive call is kept on the call stack until it returns.
*/
}

int main() {
    print(5,20);
    return 0;
}