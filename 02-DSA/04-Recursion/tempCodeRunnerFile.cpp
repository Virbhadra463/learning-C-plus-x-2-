int main() {
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

    return 0;
}