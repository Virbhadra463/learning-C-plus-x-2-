#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> leaders;

    int max_num = INT_MIN;

    for(int i = nums.size()-1; i >= 0; i--){
        if(nums[i] > max_num){
            max_num = nums[i];
            leaders.push_back(nums[i]);
        }
    }
    for(int i : leaders){
        cout << i << " ";
    }

    return 0;
}