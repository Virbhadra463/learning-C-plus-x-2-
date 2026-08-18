#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> arr = {1,1,0,0,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1};
    int freq = 0;
    vector<int> count;
    
    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i] == 1){
            freq++;
        }
        
        else{
            if(freq > 0){
                count.push_back(freq);
                freq = 0;
            }
        }
    }
    
    for(int i = 0; i < count.size()-1; i++){
        if(count[i]<count[i+1]){
            freq =count[i+1];
        }
    }
    cout << freq;
}

void optimalApproach(){
    vector<int> arr = {1,1,0,0,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1};
    int count = 0;
    int max_count = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 1){
            count++;
        }

        else{
            count = 0;
        }
        max_count = max(max_count,count);
    }
    cout << max_count;
}

int main() {
    // bruteForce();
    optimalApproach();
    return 0;
}