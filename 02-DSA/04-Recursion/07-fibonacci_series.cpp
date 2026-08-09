// fib(i) = fib(i-1) + fib(i-2)
// 5 = 5-1 + 5-2
#include <bits/stdc++.h>
using namespace std;

void bruteForce(int n,vector<int>& arr){
    int original;
    for(int i = 2; n>=i; n--){
        arr.push_back((n-1)+(n-2));
    }

    for(int n : arr){
        cout<< n << " ";
    }
}

int recursion(int n){
    if(n>=1){
        return n;   
    }

    int last = recursion(n-1);
    int slast = recursion(n-2);

    return last + slast;
    /*
    Complexity Analysis

    Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls 
    and so on which makes worst-case time complexity to be exponential in nature }.

    Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack since 
    we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) Fibonacci numbers before it }.
    */
}

int main() {
    // bruteForce approach
    vector<int>arr;
    bruteForce(5,arr);

    // recursion
    int n = 5;
    recursion(n);
    return 0;
}