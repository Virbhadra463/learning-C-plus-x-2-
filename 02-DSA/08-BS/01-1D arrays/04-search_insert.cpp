#include <bits/stdc++.h>
using namespace std;


// lower bound will be used.
int main() {
    vector<int> nums = {1,2,4,7};
    int target = 2;

    // pointers
    int low = 0;
    int high = nums.size()-1;

    int ans = 0;
    
    
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] >= target){
            ans = mid;
            high = mid -1;
        }

        else {
            low = mid + 1;
        }
    }
    cout << ans;
    return 0;
}