#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> nums = {1,3,2};

    vector<int> original = nums;

    // Store all permutations
    vector<vector<int>> all;
    
    //sort array 
    sort(nums.begin(), nums.end());
    
    do {
    all.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end())); // in built function named next_permutation

    for(int i = 0; i < all.size(); i++){
        if(original == all[i]){
                if (i == all.size() - 1) {
                    nums = all[0];
                }
                else {
                    nums = all[i + 1];
                }

                return;
            }
}

void optimalApproach(){
    vector<int> nums = {1,3,2};

    int index = -1;

    for(int i = nums.size() - 1; i>= 0; i--){
        if(nums[i] < nums[i+1]){
            index = i
            break;
        }
    }

    if(index == -1){
        reverse(nums.begin(), nums.end());
    }

}



int main() {

    
    return 0;
}