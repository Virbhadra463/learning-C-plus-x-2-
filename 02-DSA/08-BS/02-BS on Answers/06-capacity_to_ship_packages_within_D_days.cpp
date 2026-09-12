#include <bits/stdc++.h>
using namespace std;

void binarySearch(){
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int max_package = *max_element(weights.begin(), weights.end());
    
    int sum = 0; // 55
    for(int i = 0; i < weights.size(); i++){
        sum += weights[i];
    }

    // pointers
    int left = max_package;
    int right = sum;

    while(left <= right){
        int mid = (left + right)/2;
        int current_load = 0;
        int d = 1;  
        for(int i = 0; i < weights.size(); i++){
            if(current_load + weights[i] <= mid){
                current_load += weights[i];
            }
            else{
                d++;
                current_load = weights[i]; // updating overload so that it doesnt overflow
            }
        }
        if(d <= days){
            right = mid - 1;
        }
        
        else{
            left = mid + 1;
        }
    }
    cout << left;
}

int main() {
    binarySearch();
    return 0;
}