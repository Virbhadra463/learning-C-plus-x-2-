/*
in selection sort we take arrays first index as minimum index then we iterate over whole array, 
to check the lowest int value and once looping is done we swap the value with min index
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

    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }


    /*
    this was my initial approach which was correct but i was swapping values everytime while iterating and due to which time complexity increases
    and this is not how selection sort works
    */
    // for(int i = 0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         if(arr[i] > arr[j])
    //         {
    //             swap(arr[i],arr[j]);    
    //         }
    //     }
    // }

    for (int num :arr){
        cout << num << " ";
    }

    /*
    Complexity:
        Time  → O(n²) : the outer loop runs n times, and the inner loop
                        runs up to n times for each outer iteration.
        Space → O(1) : sorting is done in-place using only minIndex.
    */

    return 0;
}