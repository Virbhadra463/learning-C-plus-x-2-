#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> arr = {5, 2, 1, 3, 2, 4, 1, 6};
    int k = 10;
    int max_count = 0;
    
    for(int i = 0; i < arr.size(); i++){
        int result = 0;
        
        for(int j = i; j < arr.size(); j++){    
            result = result + arr[j];
            if(result == k){
                int count = j - i + 1;
                // cout << j << " ";
                max_count = max(max_count, count);
                break;
            }
            
            else if(result > k){
                break;
            }
        }
    }
    cout << max_count << "\n";
}

void optimalApproach(){
    vector<int> arr = {5, 2, 1, 3, 2, 4, 1, 6};
    int k = 8;
    int left=0;
    int right=0;
    int max_count = 0;
    int sum = arr[0];

    while(right < arr.size()){

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        
        if(sum == k){
            max_count = max(max_count, right - left + 1);
        }

        right++;
        if(right<  arr.size()) sum = sum + arr[right];
    }
    cout << max_count;
}

int main() {
    // bruteForce();
    optimalApproach();
    return 0;
}