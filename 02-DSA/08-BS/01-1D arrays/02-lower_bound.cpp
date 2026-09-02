// lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 2, 5};
    int target = 2;

    // pointers
    int low = 0;
    int high = nums.size()-1;
    int ans = nums.size();
    
    while(low <= high){
        int mid = (low + high) / 2;

        if(nums[mid] >= target){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }
    cout << "Index is: " << ans;
    return 0;
}