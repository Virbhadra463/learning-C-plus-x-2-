#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3,4,6,7,9,12,16,17};
    int target = 6;

    // pointers
    int low = 0;
    int high = nums.size()-1;
    
    
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] == target){
            cout << "INDEX of Target is: " << mid;
            break;
        }
        // if the target occurs on the right, we should set the low pointer to mid+1. Thus the right half will be the next search space
        else if (nums[mid] < target){
            low = mid + 1;
        }
        // target occurs on the left, we should set the high pointer to mid-1. Thus the left half will be the next search space.
        else if(nums[mid] > target){
            high = mid - 1;
        }
    }

/*
START
  │
  ▼
[3, 4, 6, 7, 9, 12, 16, 17]
  │
  │ mid = 3 → 7
  │ 6 < 7
  ▼
[3, 4, 6]
  │
  │ mid = 1 → 4
  │ 6 > 4
  ▼
[6]
  │
  │ mid = 2 → 6
  │ 6 == 6
  ▼
FOUND
*/
/*
Time complexity is : O(log n)
Space commplexity is : O(1)
*/

    return 0;
}