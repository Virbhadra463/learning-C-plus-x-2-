#include <bits/stdc++.h>
using namespace std;
// index no of last occurences - firstr occurences +1;
int main() {
    vector<int> nums = {2, 2 , 3 , 3 , 3 , 3 , 4};
    int target = 3;

    // pointers
    int low = 0;
    int high = nums.size()-1;
    
    // occurences
    int first = 0, last = 0;
    
    //first occurence
    while(low <= high){
        int mid = (low + high)/2;
        
        if(nums[mid] == target){
            first = mid;
            high = mid - 1; // search left
        }
        else if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    
    
    // reset vals
    low = 0;
    high = nums.size()-1;

    //last occurence
    while(low <= high){
        int mid = (low + high)/2;

        if(nums[mid] == target){
            last = mid;
            low = mid+1; // search right
        }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }

    int count = last - first + 1; 

    cout << count;
    return 0;
}