#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
    vector<int> arr = {1,0,2,0,3,4,0,5,0,0,0,0,6,};
    vector<int> temp;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    for(int i = 0; i < temp.size(); i++){
        arr[i] = temp[i];
    }

    for(int i = temp.size(); i < arr.size(); i++){
        if(arr[i] != 0){
            arr[i] = 0;
        }
    }

    for(int i : arr){
        cout << i << " ";
    }
/*
Time  → O(n)
Space → O(n)
*/
}

void optimalApproach(){
    vector<int> arr = {1,0,2,3,0,0,4,0,5};
    int j = -1;

    for(int i = 0 ; i < arr.size()-1; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i = j+1 ; i < arr.size(); i++){
        if(arr[i] != 0){
        
        for(int i : arr){
            cout << i << " ";
        }
        cout<<"\n";


        swap(arr[i],arr[j]);
        j++;
        }
        else{
            cout << "i is traversing and is at index: " << i << "\n" ;
            cout << "j is traversing and is at index: " << j << "\n" << "______________________\n";
        }
    }
    for(int i : arr){
        cout << i << " ";
    }
// Time  → O(n)
// Space → O(1)
}

int main() {
    bruteForce();
    optimalApproach();
    return 0;
}