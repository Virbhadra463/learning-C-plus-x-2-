// upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

/*
LOWER → >=
UPPER → >
*/
// Lower Bound includes the target. Upper Bound strictly goes beyond the target.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,2,3};
    int target = 2;

    // pointers
    int low = 0;
    int high = nums.size()-1;
    int ans = nums.size();
    
    
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] > target){
            ans = mid;
            high = mid -1;
        }

        else {
            low = mid + 1;
        }
    }
    cout << "Upper Bound index is: " << ans;
    return 0;
}