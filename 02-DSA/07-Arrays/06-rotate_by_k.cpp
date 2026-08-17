#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> temp;
    string rotate;
    int k;

    cout << "Enter the type of rotation(left or right): ";
    cin >> rotate;

    cout << "\nEnter the k's val: ";
    cin >> k;

    if(rotate == "left"){
        for(int i = k; i < arr.size(); i++){
            temp.push_back(arr[i]);
        }
        for(int i = 0; i < k; i++){
            temp.push_back(arr[i]);
        }
    }

    else if(rotate == "right"){
        for(int i = arr.size()-k; i < arr.size(); i++){
            temp.push_back(arr[i]);
        }
        for(int i = 0; i < arr.size()-k; i++){
            temp.push_back(arr[i]);
        }
    }

    else{
        cout << " Enter the correct input";
    }

    for(int i : temp){
        cout << i << " ";
        }
/*
Time Complexity: O(n)
Space Complexity: O(n), because temp stores all n elements.
*/
}

void reversearray(vector<int>& arr, int p1, int p2){
        while(p1 < p2){
            swap(arr[p1],arr[p2]);
            p1++;
            p2--;
        }
}

void optimalApproach(vector<int>& arr, int k, string direction){
    int n = arr.size();


    if(direction == "right"){
        reversearray(arr,0,n-1);
        reversearray(arr,0,k-1);
        reversearray(arr,k,-1);
    }
            else if (direction == "left") {
                // Step 1: Reverse first k elements
                reversearray(arr, 0, k - 1);

                // Step 2: Reverse remaining n-k elements
                reversearray(arr, k, n - 1);

                // Step 3: Reverse the whole array
                reversearray(arr, 0, n - 1);
            }
}

int main() {
    // bruteForce();
    vector<int> arr = {1,2,3,4,5,6,7};
    optimalApproach(arr,2,"left");
        for(int i : arr){
            cout << i << " ";
        }

    return 0;
}