/*
In Bubble sort we sort by placing highest num to last index then second highest to second last index and so on
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Taking size of the array
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Entering values in the array
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter the element: ";
        cin >> arr[i];
    }
    
    for (int i = n-1; i>0; i--){
        for (int j = 0; j < n; j++ ){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for (int num :arr){
        cout << num << " ";
    }
    /*
    Complexity:
        Time  → O(n²)
        Space → O(1)
    */
    return 0;
}

