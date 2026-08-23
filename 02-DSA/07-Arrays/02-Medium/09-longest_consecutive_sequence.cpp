#include <bits/stdc++.h>
using namespace std;

void betterApproach(){
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    // if array is empty then return nothing
    if(nums.empty()){
        return;
    }
    sort(nums.begin(), nums.end());
    int low = 0;
    int count = 1;
    int max_count = 1;
    while(low < nums.size()-1){
        if(nums[low]+1 == nums[low+1]){
            count++;
            max_count = max(max_count, count);
        }
        
        // duplicates, then do nothing
        else if(nums[low] == nums[low + 1]){
        }

        // reset if chain breaks
        else{
            count = 1;
        }

        low++;
    }
    cout <<  max_count;
/*
Current complexity: O(NlogN)
Suggested complexity: O(N)

Suggestions:
Use a Hash Set to achieve linear time complexity by checking for sequence starts.
*/
}


/*
here we used unordered set to store elements and look up them with O(1) avg, also elements are unique
*/
void optimalApproach(){
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};

    // if array is empty then return nothing
    if(nums.empty()) return;
    
    int longest =1;
    unordered_set<int> st;

    // Put all the array elements into the set
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]);
    }

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
        
        while (st.find(x+1) != st.end()){
            x = x+1;
            cnt = cnt + 1;
        }
        longest = max(longest, cnt);
        
        }
    }
    cout << longest;
}







int main() {
    optimalApproach();
    return 0;
}