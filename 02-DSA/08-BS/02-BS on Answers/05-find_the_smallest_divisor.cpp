#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {44,22,33,11,1};
    int limit = 5; // the remainder sum should be smaller than this

    int min_div = INT_MAX;
    int left = 1; // min divisor will be one
    int right = *max_element(nums.begin(),nums.end());

    while ( left <= right){
        int mid = (left + right)/2;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum += (nums[i]+mid-1)/mid;
        }
        
        cout << sum << " " << mid << "\n";
        if(sum <= limit){
            min_div = min(min_div,mid);
            right = mid-1;
        }

        else{
            left = mid+1;
        }
    }

    cout << "\n" << min_div;
    return 0;
}