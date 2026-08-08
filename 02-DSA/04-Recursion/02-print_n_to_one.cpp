#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if (n<i){
        return;
    }
        cout<< n << ", ";
        n--;
        print(i,n); // calling itself again and again until base condition n>0 is met
        // print(n-1); // write this instead of writing two lines of code.
}
/*
Complexity:
    Time  → O(n) : the function is called n times, from n down to 1.
    Space → O(n) : each recursive call is kept on the call stack until it returns.
*/


int main() {
    print(5,10);
    return 0;
}