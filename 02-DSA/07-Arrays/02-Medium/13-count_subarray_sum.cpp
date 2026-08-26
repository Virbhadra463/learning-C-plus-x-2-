#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> nums = {3,1,2,4};
    int target = 6;
    
    // to store no of subarray cnt
    int subarr = 0;

    
    for(int i = 0; i < nums.size(); i++){
        // to store result 
        int result = 0;

        for(int j = i; j < nums.size(); j++){
            result += nums[j];
            if(result == target){
                subarr++;
            }
        }
    }
    cout << subarr;
}

// use hashmap to store prefix_sum;
/*
here, we made an unordered_map and its first value was 0 key with 1 value

we check prefix sum exists in our map or not and if not we continue

*/
void optimalApproach(){
    vector<int> nums = {3,1,2,4};
    int k = 6;

    unordered_map<int, int> mp;
    mp[0] = 1; 

    int prefixsum = 0;
    int subarr = 0;

    for(int i = 0; i < nums.size(); i++){
        prefixsum += nums[i];
        if(mp.find(prefixsum-k) != mp.end()){
            subarr += mp[prefixsum-k];
        } 
    mp[prefixsum]++; 
    }
    cout << subarr;
}


int main() {
    optimalApproach();
    return 0;   
}