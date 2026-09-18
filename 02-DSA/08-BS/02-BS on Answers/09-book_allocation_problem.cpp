#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {12,34,67,90}; //arr[i] represents no of pages of ith book.
    int m = 2; // no of students

    int left = *max_element(arr.begin(), arr.end()); 
    int right = accumulate(arr.begin(), arr.end(), 0); //sum of all the elements in the arr

    if(m > arr.size()){
        cout << -1;
    }

    while (left <=  right){
        int mid = (left + right)/2;
        
        int pageSum = 0; // min page counter
        int students = 1;

        for(int i = 0; i < arr.size(); i++){
            if(pageSum + arr[i] <= mid){
                pageSum += arr[i];
            }

            else{
                students++;
                pageSum = arr[i];
            }
        }
        if(students <= m){
            
        }




    }



    return 0;
}