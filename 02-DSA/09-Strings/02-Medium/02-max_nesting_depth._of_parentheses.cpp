#include <bits/stdc++.h>
using namespace std;

/*
Approach:
1. Initialize `opened` as 0 and `ans` as 0 to keep track of the number of opened parentheses and the maximum nesting depth respectively.
2. Iterate through each character `c` in the string `s`.
    a. If `c` is an opening parenthesis '(', increment `opened` by 1 and update `ans` if it is greater than the current value of `ans`.
    b. If `c` is a closing parenthesis ')', decrement `opened` by 1.
3. Return `ans` as the maximum nesting depth.
*/
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    int opened = 0;
    int ans = 0;

    for (auto c : s) {
        if (c == '(') {
            opened++;
            ans = max(ans, opened);
        }

        else if (c == ')') {
            opened--;
        }
    }
    cout << ans;
    return 0;
}