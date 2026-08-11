#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: "; // hello
    cin >> s;

    // creating index map of alphabets
    int hash[26] = {0}; //creates an array with 26 times 0
    for(int i = 0; i< s.size(); i++){
        hash[s[i]-'A']++; // inrements the index of that array by +1
    }
    
    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'A'] << endl;
    }
    return 0;
}