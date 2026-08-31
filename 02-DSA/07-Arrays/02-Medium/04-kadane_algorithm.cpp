#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> nums = {-2, -3, -7, -2, -10, -4};
    int low = 0;
    int medium = low;
    int high = nums.size()-1;
    int sum = 0;
    int max_sum = INT_MIN;
    
    while(low <= high){
        sum = sum + nums[medium];
        max_sum = max(sum, max_sum);  
        medium++;

        if(medium > high){
        low += 1;
        medium = low;
        sum = 0;
            }                  
        }
    cout << max_sum;
// Time complexity : O(n^2)
}


// kadane's algo
/*
Kadane's algorithm finds the maximum sum of a contiguous subarray in O(n) time by deciding at each element 
whether to extend the current subarray or start a new one.
*/
void optimalApproach(){
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        max_sum = max(max_sum, sum);

        if (sum < 0){
            sum = 0;
        }
    }
    cout << max_sum;

}



int main() {
    // bruteForce();
    optimalApproach();
    return 0;
}