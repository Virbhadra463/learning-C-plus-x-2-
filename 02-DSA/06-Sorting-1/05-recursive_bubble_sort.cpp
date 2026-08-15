#include <bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>& arr, int i, int j){

    // all passes completed
    if(i == 1){
        return;
    }
    
    // one pass completed
    if(j == i-1){
        bubblesort(arr,i-1,0);
        return;
    }


    // compare adjacent elements
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }

    cout << "value of i: " << i << " | " << "value of j: " << j << "\n";
    for (int n : arr){
        cout << n << " ";
    }
    cout<< "\n";
    
    // move to next pair
    bubblesort(arr, i , j+1);
}


int main() {
    vector<int> arr = {9,7,1,6,5};
    int i = arr.size();
    bubblesort(arr,i,0);
    return 0;
}