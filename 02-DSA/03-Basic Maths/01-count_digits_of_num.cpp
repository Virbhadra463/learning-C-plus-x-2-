// Count all Digits of a Number
// You are given an integer n. You need to return the number of digits in the number.

#include <bits/stdc++.h>
using namespace std;
int main() {
    int count =0;
    for (int n = 143; n>0; n = n/10){
        count++;
    }
    cout << count;
    return 0;
}
/* 
what i learned:
first we make a variable to count with val 0
we write a for loop where we initialize our n variable whose digits we want to count
loop should run till n>0
we divide n/10 and store its val in n and once condition satistfies
we increment count by +1
and when loop is completed we print the final count
*/