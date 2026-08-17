#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,3,6,5,7};
    // sort(arr.begin(),arr.end()); // ascending to descending sort
    sort(arr.begin(),arr.end(), greater<int>()); // descending to ascending sort

    for(int i = 0; i < arr.size()- 1; i++){
        if(arr[i] <= arr[i+1] || arr[i] >= arr[i+1]){
            continue;
        }

        else{
            cout << "Array is not sorted";
            break;
        }
    }    return 0;
}