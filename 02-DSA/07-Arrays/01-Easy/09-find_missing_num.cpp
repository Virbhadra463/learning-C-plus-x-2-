#include <bits/stdc++.h>
using namespace std;

void bruteForce(vector<int>& arr){
    sort(arr.begin(),arr.end());

    for(int i = 0; i < arr.size()-1; i ++){
        if(arr[i] + 1 != arr[i+1]){
            cout << arr[i]+1;
            break;
        }
    }
/*
Time Complexity = O(N logn)
Space Complexity = O(1)
*/
}

// Use hashing
void betterApproach(vector<int>& arr){

    int hash[arr.size()] = {0};
    
}

int main() {
    vector<int> arr = {8,5,1,3,2,4,6};
    bruteForce(arr);
    return 0;
}