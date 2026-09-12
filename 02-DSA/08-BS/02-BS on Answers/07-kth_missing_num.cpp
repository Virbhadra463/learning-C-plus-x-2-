#include <bits/stdc++.h>
using namespace std;

void bruteForce(){

    vector<int> arr = {1,2,3,4};
    int k = 4;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= k) {
            k++;
        } else {
            break;
        }
    }
    cout << k;
/*
Time complexity = O(n)
Space complexity = O(1)
*/
}

void binarySearch(){
    vector<int> arr = {1,2,3,4};
    int k = 2;

    // pointers
    int left = 0;
    int right = arr.size()-1;

    while(left <= right){
        int mid = (left + right)/2;

        int missing = arr[mid] - (mid + 1); // finds how many missing number before mid

        if(missing < k){
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }
    cout << k + right + 1; // formula

// Time complexity = O(log n)
// Space complexity = O(1)
}

int main()
{
    // bruteForce();
    binarySearch();
    return 0;
}