#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    // initiated an array
    vector<int> arr = {9,2,7,8,1,12,10};
    
    // sorted it from asc to desc
    sort(arr.begin(),arr.end());
    
    // array size -1 will give its last index
    int n = arr.size()-1;
    
    // array at last index is ofc greater
    cout << arr[n];
/*
Complexity Analysis
Time Complexity: O(N log N), where N is the size of the array, and logN because of sort function.
Space Complexity: O(1), as we are using a constant
*/


}

void optimalApproach(){
    // initiated an array
    vector<int> arr = {9,2,7,8,1,12,10};
    int max = 0;

    for(int i = 0; i < arr.size(); i++ )
    {
        if(arr[max] < arr[i]){
            max = i;
        }


    }
    cout << arr[max];
/*
Complexity Analysis: 
Time Complexity: O(N), where N is the size of the array, as we are iterating through the array once.

Space Complexity: O(1), as we are using a constant
*/
}







int main() {
    bruteForce();
    optimalApproach();
    return 0;
}