// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
#include <bits/stdc++.h>
using namespace std;

int main() {
int num = 992828831;
int rev = 0;

    while (num > 0){
        int lastDigit = num%10;

        rev = rev *10 + lastDigit;

        num = num / 10;
    }

    cout << rev;
    return 0;
}

/*
what i learned:
initialise n = < num you wanna reverse >
initialise variable where you wanna store reversed value
while loop to run the loop until n is greater than 0
last digit varibale to store last digit lile = 143%10 = 3, 14%10 = 4, 1%10 = 1
rev variable where rev  = 0 *10 + 3=3, rev = 3*10 + 4 = 34, rev = 34*10 +1 = 341
num = num/10, where 143/10 = 14, 14/10 = 1

final rev is printed

*/

