#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> nums = {10,20,30,40,50,60,70,80,90};
    int target = 1;
    
    // sorting the given input array, to perform two pointers
    sort(nums.begin(), nums.end());

    // array to store the result
    vector<int> output;
    int closest = INT_MAX;      // distance from target
    int closestSum = 0;         // actual sum

    // for loop 
    for(int i = 0; i < nums.size()-1; i++){
        // creating pointers
        int left = i+1;
        int right = nums.size()-1;
        
        // while loop
        while(left < right){
            int sum = 0;
            sum = nums[i] + nums[left] + nums[right];

            if(sum == target){
                closestSum = sum;
                break;
            }

            else if(sum > target){
                right--;
            }

            else if(sum < target){
                left++;
            }
            int difference = abs(target - sum);

            if(difference < closest){
                closest = difference;
                closestSum = sum;
                }
            }
        }
    cout << closestSum;
    return 0;
}