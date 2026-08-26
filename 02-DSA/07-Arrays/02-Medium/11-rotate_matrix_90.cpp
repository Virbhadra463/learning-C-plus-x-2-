#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
//j =    0 1 2
        {1,2,3}, // i = 0;
        {4,5,6}, // i = 1;
        {7,8,9}  // i = 2;
    };

    // Transpose the matrix
    for(int i = 0; i < matrix.size(); i++){
        for(int j = i+1; j < matrix[i].size(); j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse each row
    for(int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return 0;
}