#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

        //initialise two pointers
        int left = 0;
        int right = height.size() - 1;

        // track boundaries
        int leftmax = 0;
        int rightmax = 0;
        
        // count of water trapped
        int water = 0;

        // while condition to run the loop
        while (left < right) {
            
            if (height[left] >= height[right]) {
                rightmax = max(rightmax, height[right]);
                water += rightmax - height[right];
                right--;
            }

            else if (height[left] < height[right]) {
                leftmax = max(leftmax, height[left]);
                water += leftmax - height[left];
                left++;
            }
        }
        cout << water;
/*
Time complexity = O(n)
Space complexity = O(1)
*/
    return 0;
}