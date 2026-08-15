#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>& arr, int n, int i){
    if(i==n){
        return;
    }
    int j = i;
    while(j>0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
                                        for(int k : arr){
                                            cout << k << " ";
                                        }
                                        cout << "\n";
        
        arr[j] = temp;


                                        cout << "\n" << "value of j: " << j << " | " << "value of temp: " << temp << "\n";
                                        for(int k : arr){
                                            cout << k << " ";
                                        }
        cout << "\n";
        j--;
    }

    insertionsort(arr, n, i +1);
}


int main() {
    vector<int> arr = {9,2,3,4,5,6,1,12,10};
    int n = arr.size();

    insertionsort(arr, n, 0);
return 0;
}