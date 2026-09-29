#include <bits/stdc++.h>
using namespace std;

int main() {
        // there are 26 alphabets max, so we have to use hashtable to count frequencies of uniq characters
        // ascii codes will be used as char are lowercase
        string s = "anagram";
        string t = "nagaram";
        bool check = true;

        if (s.size() != t.size()){
            check = false;
            break;
        } // edge case
        
        int freq[26] = {};

        for(int i = 0; i < s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for(int i = 0; i < 26; i++){
            if(freq[i] != 0)
                check = false;
        }


        for(int i : freq){
            cout << i << ", ";
        }
        cout << "\n" << check;
    return 0;
}