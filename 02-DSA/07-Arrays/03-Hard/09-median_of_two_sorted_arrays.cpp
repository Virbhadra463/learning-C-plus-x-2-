#include <bits/stdc++.h>
using namespace std;

int main() {
// Merge and sort technique        
        vector<int> nums1 = {1,2};
        vector<int> nums2 = {3,4};

        vector<double> nums3(nums1.begin(), nums1.end());
        double median;

        // nums3.insert;
        nums3.insert(nums3.end(),nums2.begin(), nums2.end());

        sort(nums3.begin(), nums3.end());

        if(nums3.size()%2 == 0){
            median = (nums3[nums3.size()/2-1] + (nums3[nums3.size()/2]))/2.0;
        }
        
        else{
            median = nums3[nums3.size()/2];
        }
        cout << median;
/*
Time complexity is = O(m+n log(m+n))
space complexity is = O(n)
*/
    return 0;
}