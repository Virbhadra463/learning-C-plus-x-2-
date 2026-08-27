#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = { 1, 2, 1, 1, 3, 2,13 };
    unordered_map<int, int> hash;

    for(int i = 0; i < nums.size(); i++){
        hash[nums[i]] = 0;
    }

    for(int i = 0; i < nums.size(); i++){
    if(hash.find(nums[i]) != hash.end()){
        hash[nums[i]]++;
    }

}
for(auto i : hash){
    if(i.second > nums.size()/3){
        cout << i.first;
    }
}

    return 0;
}