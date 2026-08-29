#include <bits/stdc++.h>
using namespace std;


/*
used int and faced a runtime error so using long
*/
int main() {
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    // -2,-1,0,0,1,2

    int target = 9;

    // sorting the given array
    sort(nums.begin(), nums.end());

    for (int i : nums) {
        cout << i << " ";
    }

    // to store the result
    vector<vector<int>> output;

    for (int i = 0; i < nums.size() - 1; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        for (int mid = i + 1; mid < nums.size() - 1; mid++) { // i and mid are fixed pointers
            
            if (mid > i+1 && nums[mid] == nums[mid - 1]) {
                continue;
            }
            int left = mid + 1;
            int right = nums.size() - 1;


            while (left < right) {
                long long sum = (long long)nums[i] + nums[mid] + nums[left] + nums[right];

                if (sum > target) {
                    right--;
                }

                else if (sum < target) {
                    left++;
                }

                else if (sum == target) {
                    output.push_back(
                        {nums[i], nums[mid], nums[left], nums[right]});
                    left++;
                    right--;

                    // duplicates
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }
    }
    cout << "\n";
    for (auto i : output) {
        for (auto n : i) {
            cout << n << " ";
        }
        cout << "\n";
    }

    return 0;
}