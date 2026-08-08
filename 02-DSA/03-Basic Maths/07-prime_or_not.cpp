#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 11;
    int count  =0;

    for ( int i = 1; i*i <= n; i++ ){
        if( n%i == 0 ){
            cout<< i << "\n";
            count++;
        }
    }
    cout << "Number of divisors: " <<count;
    if(count>2){
        cout << "\nnumber is not a prime number.";
    }
    else{
        cout << "\nnumber is a prime number";
    }


    return 0;
}