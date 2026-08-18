#include <bits/stdc++.h>
using namespace std;

/*
my approach was to create an empty temp array and use nested loops to check if given array element is == to element in temp array, if not then push
*/
void myMethod(){
    vector<int> arr = {1,1,2,2,3,3,3};
    vector<int> temp;
    
    for(int i = 0; i < arr.size();i++)
    {
        bool found = false;
        
        for (int j = 0; j < temp.size(); j++){
            if(arr[i] == temp[j]){
                found = true;
                break;    
            }
        }

        if(found == false){
            temp.push_back(arr[i]);
            }
        }

    for(int i : temp){
        cout << i << " ";
    }
/*
Time  → O(n²)
Space → O(n)
*/
}

void bruteForce(){
    vector<int> arr = {1,1,2,2,2,2,3,3,4,5,66,7};
    unordered_set<int> set;

    int i = 0;

    for(int n : arr){
        if(set.find(n) == set.end()){
            set.insert(n);

            cout << "set: ";
            for(int i : set){
                cout  << i << " ";
            }
            cout<< "\n";
            
            for(int i : arr){
                cout  << i << " ";
            }
            cout<< "\n";
            arr[i] = n;

            i++;
        }
    }
}

void optimalApproach(){
    vector<int> arr ={1,1,2,2,2,3,3,3};
    int i = 0;
    for(int j = 1; j < arr.size(); j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    for(int i : arr){
        cout << i << " ";
    }
}
int main() {
    // myMethod();
    // bruteForce();
    optimalApproach();
    return 0;
}