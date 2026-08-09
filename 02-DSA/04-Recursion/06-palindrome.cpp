#include <bits/stdc++.h>
using namespace std;

void bruteForce(string n){
    string s = "ABCDCBA";
    for (char c : s ){
        cout << c;
    }
    cout << "\n";

    bool isPalindrome = true;

    for(int i = 0; i < s.length()/2; i++){
        
        if(s[i] == s[s.length()-i-1]){
            continue;
        }
        else{
            isPalindrome = false;
            break;
        }
    }
   
    if (isPalindrome) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}

bool recursion(int i, string& s){
    if(i>= s.length()/2) return true;

    if(s[i] != s[s.length()-i-1]) return false;

    return recursion(i+1, s);
}



void otherway(string str){
    int start = 0;
    int end = str.length()-1;

    while(start < end){
        if(str[start] == str[end]){
            start++;
            end--;
            cout << "true";
        }
        else{
            cout << "false";
            break;
        }
    }
}



int main() {
    // bruteForce();
    
    //recursion
    string s = "madam"; 
    cout << recursion(0,s);
    cout<< "\n";

    // otherway
    otherway("ABCDCB");

    return 0;
}