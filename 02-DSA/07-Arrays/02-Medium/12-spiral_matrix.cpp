#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<vector<int>> matrix = {
//j =    0 1 2 3
        {1,2,3,4}, // i = 0;
        {5,6,7,8}, // i = 1;
        {9,20,11,12},  // i = 2;
        {13,14,15,16}  //i = 3;
    };

    vector<int> result;

    int top = 0;
    int bottom = matrix.size()-1;
    int left = 0;
    int right = matrix[0].size()-1;

    while(top <= bottom && left <= right){

        for(int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;

        for(int i = top; i <= bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;

        if(top <= bottom){
            // traverse from right to left
            for(int i = right; i >= left; i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(left<= right){
            // traverse from bottom to top on left column
            for(int i = bottom; i >= top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for(int i : result){
        cout << i << " ";
    }
    return 0;
}