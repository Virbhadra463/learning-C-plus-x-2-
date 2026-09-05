#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int> nums = {4,5,6,7,0,1,2};


        // pointers
        int low = 0;
        int high = nums.size() - 1;


        while (low < high) {
            int mid = (low + high) / 2;

            // Left part is sorted, so minimum is on the right
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }

            // Minimum is at mid or on the left
            else {
                high = mid;
            }
        }
        cout << nums[low];
    return 0;
}