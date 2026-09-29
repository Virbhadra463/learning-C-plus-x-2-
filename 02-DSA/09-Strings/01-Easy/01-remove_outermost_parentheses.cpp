#include <bits/stdc++.h>
using namespace std;

int main() {
        string s = "(()())";
    
        string ans = "";
        int balance = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (balance > 0) {
                    ans += s[i];
                }
                balance++;
            }

            else {
                balance--;
                if (balance > 0) {
                    ans += s[i];
                }
            }
        }
    cout << ans;
    return 0;
}