#include <bits/stdc++.h>
using namespace std;

//upper bound will be used and -1 will be done
int main() {
    vector<int> nums = {1, 2, 2, 2};
    int target = 2;

       int low = 0;
        int high = nums.size() - 1;
        
        
        vector<int> ans;  
        int first = -1;
        int last = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;  // search left
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;  // search right
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        ans.push_back(first);
        ans.push_back(last);

        cout << first << " " << last;
    return 0;
}