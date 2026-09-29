#include <bits/stdc++.h>
using namespace std;

int main() {
    string num = "0214638";
    string ans = "";
    int left = 0;
    int right = num.size()-1;
    
    // if any 0 at start then left++
    if(num[left] == '0'){
        left++;
    }
    cout << "Left: " << left << "\n";
    while(left <= right){

        // last val should be odd 
        int nums = num[right];
        if(nums%2 == 0){
            right--;
        }

        else{
            cout << "Right: " << right << "\n";
            break;
        }
    }

    // for(int i = left; i <= right; i++){
    //     ans += num[i];
    // }

    // cout << "Answer: " << ans;
    cout << "Answer: " << num.substr(left, right+1); // better way
    return 0;
}