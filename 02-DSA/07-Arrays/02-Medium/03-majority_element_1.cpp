#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> nums = {1, 1, 1, 2, 1, 2};
    unordered_map<int,int> mp;
    int zero = 0;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    int maxFrequency = 0;
    int maxElement = 0;
    for(auto p : mp){
        if(p.second > maxFrequency){
            maxFrequency = p.second;
            maxElement = p.first;
        }
    }
    cout <<  maxElement;
}

int main() {
    bruteForce();
    return 0;
}