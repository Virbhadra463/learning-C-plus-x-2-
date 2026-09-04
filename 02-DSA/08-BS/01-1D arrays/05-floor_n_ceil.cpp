//The floor of x is the largest element in the array which is smaller than or equal to target. 
// The ceiling of x is the smallest element in the array greater than or equal to target.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3, 4, 4, 7, 8, 10}; 
    int target = 8;

    int low = 0;
    int high = nums.size()-1;
    int floor, ceil;


    while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid] == target) {
            floor = nums[mid];
            ceil = nums[mid];
            break;
        }
        else if(nums[mid] < target) {
            floor = nums[mid];
            low = mid + 1;
        }
        else {
            ceil = nums[mid];
            high = mid - 1;
        }
    }
    cout << floor << ", " << ceil;


    return 0;
}