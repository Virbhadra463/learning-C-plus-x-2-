#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    //two pointers
    int low = 0;
    int high = nums.size()-1;

    while(low <= high){
        int mid = (low+high)/2;

        if(nums[mid] == target){
            cout << mid;
            break;
        }

        // search left
        else if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target < nums[mid]){
                high = mid -1;
            } 
            else{
                low = mid +1;
            }
        }

        // search right
        else if(nums[high] >= nums[mid]){
            if(nums[mid] < target && nums[high] > target ){
                low = mid+1;
            }

            else{
                high = mid - 1;
            }
        }


    }


    return 0;
}