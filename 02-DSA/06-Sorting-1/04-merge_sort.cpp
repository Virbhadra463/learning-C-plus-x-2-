 #include <bits/stdc++.h>
 using namespace std;
 
void mergesort(vector<int> arr, int low, int mid, int high){
    // Create a temp array
    vector<int> temp;
    int left = low, right = mid+1 ;
}

void divide(vector<int> arr, int low, int high){
    // recursive base condition
    if(low >= high ){
        return;
    }

    // divide into two halves
    int mid = (low+high)/2;

    // sort left array
    divide(arr,low,mid);

    // sort right array
    divide(arr,mid+1, high);

    mergesort(arr,low,mid,high);
}

    int main() {
    int arr[6]= {4,2,7,1,5,3};     
     
    int middle = (sizeof(arr)/sizeof(arr[0]))/2;

    vector<int> temp;

    for(int i = 0; i < middle; i++){
        temp.push_back(arr[i]);
    }

    for(int n : temp){
        cout << n << " ";
    }
    return 0;
 }