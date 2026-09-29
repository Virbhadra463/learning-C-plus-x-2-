#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> strs = {"flower","flow","flight"};
    sort(strs.begin(), strs.end()); // so that max char should be smallest flower is greater than flow so code will break; we sort
    string prefix = "";
    bool check = false;

    for(int j = 0; j < strs[0].size(); j++){
        char current = strs[0][j];

        for(int i = 1; i < strs.size(); i++){
            if(strs[i][j] != current){
                check = true;
            }
        }
        if(check == true){
            break;
        }
        prefix += current;  
    }
    
    
    cout << prefix;
    return 0;
}