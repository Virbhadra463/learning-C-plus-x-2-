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
    
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j= i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;

            arr[j+1] = key;
        }
    }

    for (int num :arr){
        cout << num << " ";
    }
    return 0;
}