#include <bits/stdc++.h>
using namespace std;

// I IS CONSTANT AND WE MOVE TWO POINTERS
int main() {
    vector<int> nums = {-1,0,1,2,-1,-4};
    // -4,-1,-1,0,1,2

    sort(nums.begin(), nums.end());
    vector<vector<int>> output;


for(int i = 0; i < nums.size(); i++){
    int mid = i+1;
    int high = nums.size()-1; 

    // skip duplicates 
    if(i > 0 && nums[i] == nums[i - 1]){
    continue;
    }

    while(mid < high){
        int result = 0;
        result = nums[i] + nums[mid] + nums[high] ;
        if(result < 0){
            mid++;
        }

        else if(result > 0){
            high--;
        }
        
        else if( result == 0){
            output.push_back({nums[i], nums[mid], nums[high]});
            mid++;
            high--;
            
            // duplicates
            while(mid < high && nums[mid] == nums[mid - 1]){
                mid++;
            }

            while(mid < high && nums[high] == nums[high + 1]){
                high--;
            }
        }
    }                       

}
for(auto row : output){
    for(auto x : row){
        cout << x << " ";
    }
    cout << "\n";

}
return 0;
}