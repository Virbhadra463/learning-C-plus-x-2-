#include <bits/stdc++.h>
using namespace std;
// first find the min value in the array
// same as min value question because number of rotations = index position on min val.
int main() {
    vector<int> nums = {4,5,6,7,0,1,2,3};

    // pointers
    int left = 0;
    int right = nums.size()-1;

    // while loop
    while(left < right){
        int mid = (left + right)/2;

        // we will search in right because min values are in rightside of rotated arr
        if(nums[mid] > nums[right]){
            left = mid+1;
        }

        else{
            right = mid;
        }
    }
    int min_index = left;
    cout << min_index;


    return 0;
}