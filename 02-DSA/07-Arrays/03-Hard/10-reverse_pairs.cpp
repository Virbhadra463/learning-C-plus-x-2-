#include <bits/stdc++.h>
using namespace std;

void mergesort(vector<int> nums, int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid + 1;
}

int divide(vector<int> nums, int low, int high){
    if(low>=high){
        return;
    }

    int mid = (low+high)/2;

    divide(nums,low,mid);

    divide(nums, mid+1, high);

    mergesort(nums, low, mid, high);
}



int main() {
    vector<int> nums = {1,3,2,3,1};
    return 0;
}