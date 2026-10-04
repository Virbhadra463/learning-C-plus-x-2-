/*
Question:
Given a Roman numeral as a string, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

Approach:
1. Create a map to store the values of each Roman symbol.
2. Initialize `result` as the value of the first symbol in the input string.
3. Iterate through each character `c` in the input string `s`, starting from the second character.
    a. If the value of the current symbol is greater than the value of the previous symbol, subtract twice the value of the previous symbol from `result` and add the value of the current symbol.
    b. Otherwise, add the value of the current symbol to `result`.
4. Return `result` as the converted integer.

Time Complexity: O(n), where n is the length of the input string `s`.
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "LVIII";


        unordered_map<char,int> symbolValues = {
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D', 500},
            {'M',1000}
        };
        
        int ans = 0;
        for(auto c : s){
            ans += symbolValues[c];
        }

        cout << ans;


    return 0;
}