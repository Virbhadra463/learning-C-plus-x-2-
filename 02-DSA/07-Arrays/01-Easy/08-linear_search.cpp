#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,5,6};
    int n = 5;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i]==n){
            cout << n << " is present at index " << i << "\n";
            break;
        }
    }
// Time Complexity: O(N), where N is the number of elements in the array. This is because we traverse the entire array to find the element.
// Space Complexity: O(1), as we are using a constant
    return 0;
}