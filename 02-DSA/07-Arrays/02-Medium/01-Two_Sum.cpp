#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;

    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            int sum = 0;
            sum = arr[i]+arr[j];
            if(sum == target){
                cout << "[" << i << "," << j << "]";
                break;
            }
        }
    }
/*
Time Complexity - O(n*n)
Space Complexity - O(1)
*/
}

// hashmap approach
void betterApproach(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;

    unordered_map<int, int> mp; // Map to store element -> index
    for(int i = 0; i < arr.size(); i++){
        int complement = target - arr[i]; // here we got 14-6 = 8

        if(mp.find(complement) != mp.end()){ // search 8 in map if 8 is there then 6 and 8 is a pair
        cout << mp[complement] << " " << i;            
        }
    mp[arr[i]] = i;
    }
/*
Time complexity: O(n)
Space complexity: O(n)
*/
}

// sorting + two pointers
void optimalApproach(){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    int left = 0;
    int right = arr.size()-1;
    int sum;

    sort(arr.begin(), arr.end());    

    while(left < right){
        sum = arr[left] + arr[right];
        if(sum < target){
            left++;
        }

        else if(sum > target){
            right--;
        }

        else if(sum == target){
            cout << left << " " << right;
            break;
        }
    }
}


int main() {
    // bruteForce();
    // betterApproach();
    optimalApproach();
    return 0;
}