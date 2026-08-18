#include <bits/stdc++.h>
using namespace std;

void myMethod(){
    vector<int> arr = {1,2,3,4,5};
    
    arr.push_back(arr[0]);
    arr.erase(arr.begin());
    for(int i : arr){
        cout << i << " ";
    }
}

void bruteForce(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> temp;

    for(int i = 1; i < arr.size(); i++){
        temp.emplace_back(arr[i]);
    }
    temp.push_back(arr[0]);
    for(int i : temp){
        cout << i << " ";
    }
/*
Complexity Analysis
Time Complexity: O(N), where N is the size of the array. This is because we traverse the array once to shift the elements.
Space Complexity: O(N), as we are using a temporary array of the same size as the input array to store the shifted elements.
*/
}

void optimalApproach(){
    vector<int> arr = {1,2,3,4,5};
    int temp = arr[0];

    for (int i = 1; i < arr.size(); i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1] = temp;

    for(int i : arr){
        cout << i << " ";
    }
/*
Complexity Analysis
Time Complexity: O(N), where N is the size of the input array. This is because we traverse the array once to shift the elements.
Space Complexity: O(1), as we are using only a constant amount of extra space for the temporary variable.
*/
}

int main() {
    // myMethod();
    // bruteForce();
    optimalApproach();
    return 0;
}