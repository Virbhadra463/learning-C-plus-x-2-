#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2,1,2};
    // create a hash array
    int hash[arr.size()] ={0};

    // add frequency in hash array
    for(int i = 0; i < arr.size(); i++){
        hash[arr[i]]++;
    }

    // iterate through hash array
    for(int i = 0; i < arr.size(); i++){
        if(hash[i]==1){
            cout << hash[i];
        }
    }
/*
Time complexity : O(n)
Space complexity : O(n)
*/
    return 0;
}