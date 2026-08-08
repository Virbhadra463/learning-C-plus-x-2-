#include <bits/stdc++.h>
using namespace std;

void BruteFoce(){
      int n1 = 5;
    int n2 = 10;
    int gcd = 1;
    int i = 1;


    while(i <= min(n1,n2)) // gcd cannot be greater than smallest num between two
    {
        if (n1%i == 0 && n2%i == 0){
            gcd = i;
        }
        i++;
    }
    cout << gcd;
}

void optimalApproach(){
    //Euclidean Algorithm
    int n1 = 20;
    int n2 = 15;
    while(n1 > 0 && n2 > 0){
    if (n1 > n2){
        n1 = n1 % n2;
    }

    else{
        n2 = n2 % n1;
    }
    }

    if ( n1 == 0){
        cout << n2;
    }

    else {
        cout << n1;
    }
}



int main() {
  optimalApproach();
    return 0;
}