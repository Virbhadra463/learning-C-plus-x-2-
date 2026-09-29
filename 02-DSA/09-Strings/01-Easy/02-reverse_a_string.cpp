#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
        string s = " HEllo World   ";
    
        string rev = "";
        vector<string> words;
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            }

            else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty()) {
            words.push_back(word);
        }

        for (int i = words.size() - 1; i >= 0; i--) {
            rev += words[i];

            if (i != 0) {
                rev += " ";
            }
        }
        cout << rev;
}

void twoPointer(){
    string s = " HEllo World   ";
    string rev = "";

    int i = s.size()-1;

    while(i >= 0){
        while(i >= 0 && s[i] == ' '){
            i--;
        }

        if(i<0){
            break;
        }

        int end = i;

        while(i >= 0 && s[i] != ' '){
            i--;
        }

        string word = s.substr(i + 1, end - i); // here i+1 is start position and end - i is how many characters to add
        if(!rev.empty()){ // if word is not empty then only add space before
            rev += " ";
        }
        rev += word;
    }
        cout << rev;
}

int main() {
    // bruteForce();
    twoPointer();
    return 0;
}