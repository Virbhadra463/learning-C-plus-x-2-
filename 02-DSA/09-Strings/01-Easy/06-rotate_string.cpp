#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "dawhwh";
    string goal = "hdawhw";
    bool check = false;

    for(int i = 0; i < s.size(); i++){
        s += s[0];
        s.erase(0, 1);
        cout << s << "\n";

        if(s == goal){
            check = true;
            break;
        }
    }
    cout << check;
    return 0;
}