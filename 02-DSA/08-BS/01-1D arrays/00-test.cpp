#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3};
    vector<vector<int>> perm;
    perm.push_back(next_permutation(nums.begin(), nums.end()));

    for(auto i : perm){
        for(auto n : i){
            cout << n << " ";
        }
        cout << "\n";
    }
    return 0;
}