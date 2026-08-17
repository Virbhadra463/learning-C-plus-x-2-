#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> arr = {9,1,5,0,2,6,7,3,70,56,31};
    sort(arr.begin(),arr.end());

    cout << "\nBrute Force Approach" << "\n";
    for(int i : arr){
        cout << i << " ";
    }
    cout << "\n" << arr[arr.size()-2];
/*
Complexity Analysis
Time Complexity: O(N log N), where N is the size of the array, and logN because of sort function.
Space Complexity: O(1), as we are using a constant
*/
}

void betterApproach(){
    vector<int> arr = {9,1,5,0,2,6,7,3,70,56,31};
    int small = INT_MAX, second_small = INT_MAX; // approximately 2,147,483,647
    int large = INT_MIN, second_large = INT_MIN; // approximately -2,147,483,648

    for(int i = 0; i < arr.size(); i++){
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    cout << "\n\nBetter Approach:\n";
    cout << "Smallest element is: " << small << "\n";
    cout << "Largest element is: " << large << "\n";

    for ( int i = 0; i < arr.size(); i++){
        if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
        if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }

    cout << "Second Smallest element is: " << second_small << "\n";
    cout << "Second Largest element is: " << second_large << "\n";
    /*
    Complexity Analysis
    Time Complexity: O(N), we do two linear traversals in our array.
    Space Complexity: O(1), as we are using a constant amount of space for variables.
    */
}

void optimalApproach(){
    vector<int> arr = {9,1,5,0,2,6,7,3,70,56,31};
    int small = INT_MAX, second_small = INT_MAX; // approximately 2,147,483,647
    int large = INT_MIN, second_large = INT_MIN; // approximately -2,147,483,648
    
    cout << "\nOptimal Approach:\n";
    // Smallest Value
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < small){
            second_small = small;            
            small = arr[i];
        }
        else if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
    }
    cout << "Second Smallest element is: " << second_small << "\n";
    
    // larget value
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i] != large){
                second_large = arr[i];
        }
    }
    cout << "Second Largest element is: " << second_large << "\n";
/*
Complexity Analysis
Time Complexity: O(N), we do two linear traversals in our array.
Space Complexity: O(1), as we are using a constant


*/
}




int main() {
    bruteForce();
    betterApproach();
    optimalApproach();
    return 0;
}