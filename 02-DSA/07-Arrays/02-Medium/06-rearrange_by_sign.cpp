#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,-3,-1,-2,3};
    int pos = 0;
    int neg = 1;
    vector<int> result(nums.size(),0);

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > 0){
            result[pos] = nums[i];
            pos += 2;
        }
        
        else{
            result[neg] = nums[i];
            neg += 2;
        }
    }
    for(int i: result)
    {
        cout << i << " ";
    }
/*
Time complexity : O(n)
Space complexity : O(n)
*/
    return 0;
}