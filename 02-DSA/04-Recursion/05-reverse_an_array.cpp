#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    int arr[5]={1,2,3,4,5};
    int i = size(arr) - 1;

    for (; i>=0; i--){
        cout<< arr[i] << ", ";
    }
    
}

void recursion(int arr[], int i, vector<int>& newarr){ // & doesnt lets new arr get duplicate again ana dagain it lets val get stored there only
    if(i<0){
        return;
    }

    newarr.push_back(arr[i]);

    recursion(arr,i-1, newarr);
}

void betterApproach(vector<int>& arr1){
    int p1 = 0;
    int p2 = arr1.size() - 1;

    while(p1<p2){
        swap(arr1[p1], arr1[p2]);

        p1++;
        p2--;
    }
}

void built_in_func(vector<int>& arr2){
    reverse(arr2.begin(), arr2.end());
}


int main() {
    // bruteForce();

    // recursion appraoch
    int arr[] = {1,2,3,4,5};
    vector<int> newarr;

    recursion(arr, 4, newarr);

    for (int val : newarr) {
        cout << val << " ";
    }
    cout << "\n";
    // better apporach
    vector<int> arr1 = {1, 2, 3, 4, 5};

    betterApproach(arr1);

    for (int num : arr1) {
        cout << num << " ";
    }
    
    // Built-in function
    
    vector<int> arr2 = {1,2,3,4,5};
    built_in_func(arr2);
    for (int num : arr2) {
        cout << num << " ";
    }
    
    return 0;
}