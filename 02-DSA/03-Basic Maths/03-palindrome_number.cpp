/*
You are given an integer n. You need to check whether the number is a palindrome number or not. 
Return true if it's a palindrome number, otherwise return false.
*/
//A palindrome number is a number which reads the same both left to right and right to left.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 121;
    int original_num = num;
    int rev = 0;

    while (num > 0){
        int lastDigit = num%10;

        rev = rev *10 + lastDigit;

        num = num / 10;
    }

    if ( original_num == rev){
        cout<< "True";
    }
    else {
        cout << "False";
    }
    return 0;
}
