#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 161;
    int n1 = n;
    int original = n;
    int count = 0;
    int arm = 0;

    // int k = to_string(n).length(); //one more way to count no of digits.
    // cout << k;

    for(;n>0;n=n/10){
        int sing = n%10;
        cout << sing << "\n";
        count++;
    }
    cout<< "No. of digits are: "<< count << "\n";
    

    for(;n1>0;n1=n1/10){
        int n2 = n1%10;
        arm = arm + pow(n2, count);

    }
    if(arm == original){
        cout << "Armstrong number: True, because " << original << " == " << arm;
    }
    else {
        cout << "Armstrong number: False, because " << original << " != " << arm;
    }
    return 0;
}