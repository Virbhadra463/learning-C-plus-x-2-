#include <bits/stdc++.h>
using namespace std;

// create a hasharray with freq of 0,1,2 and overwrite array with those vals
void bruteForce(){
    vector<int> nums = {1, 0, 2, 1, 0};
    vector<int> hash(3,0);

    for(int i = 0; i < nums.size(); i++){
        hash[nums[i]]++;
    }
    int index = 0;
    for(int i = 0; i < hash[0]; i++){
        nums[index++] = 0;
    }
    for(int i = 0; i < hash[1]; i++){
        nums[index++] = 1;
    }
    for(int i = 0; i < hash[2]; i++){
        nums[index++] = 2;
    }

    for(int i : nums){
        cout << i << " ";
    }
    
}

// DUTCH NATIONAL FLAG ALGORITHM
void optimalApproach(){
    vector<int> nums = {1, 0, 2, 1, 0};
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    

    while(mid <= high){
        if(nums[mid] == 1){
            mid++;
        }

        else if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
            
        }

        else if(nums[mid] == 2){
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    for(int i : nums){
        cout << i << " ";
    }
}

int main() {
    // bruteForce();
    optimalApproach();
    return 0;
}