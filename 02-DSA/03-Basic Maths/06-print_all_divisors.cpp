#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    int n = 36;
    int i = 1;

    while(i<=n){
        int d = n%i;

        if(d == 0){
            cout << i << ", ";
        }
        i++;
    }

    /*
    Complexity: 
        Time  → O(n) : we check for every number from 1 to N.
        Space → O(1) : we have fixed variable and do not store the result.
    */
}

void optimalSol(){
/*
ohkay so instead of iterating through every number, we can use an algo where:

first we will take sqrt of given number: sqrt of 36 is 6 and we will iterate till 6

1*36 = 36, 2*18 = 36, 3*12 = 36, 4*9 = 36 so you can see that if you reverse this numbers then you can get diff output 
like 36,18,12,9 without iterating which will save our time complexity.

*/
// declare variable
int n = 36;

// for loop to run until i * i == n, which will stop the loop till we get sqrt.
for(int i = 1; i * i <= n; i++){
    // if remainder is 0 then print that num
    if (n%i == 0){
        cout << i << ", ";

        // if i is not equal to n/i, eg 2 != 36/2 = 18 then print 18, this condition breaks when 6 != 6
        if(i != n/i){
            cout << n/i << ", ";
        }
    }
    }
    /*
    Complexity:
        Time  → O(√n) : we check only numbers from 1 to √N and get the paired divisor using N/i.
        Space → O(1)  : we use only fixed variables and do not store the divisors.
    */
}

int main() {
    // bruteForce();
    optimalSol();
    return 0;
}