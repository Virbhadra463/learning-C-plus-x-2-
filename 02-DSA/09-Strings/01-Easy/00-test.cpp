#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "dawhwh";
    string goal = "hdawhw";

    s += s[2];
            s.erase(0, 1);
    cout << s;
    return 0;
}