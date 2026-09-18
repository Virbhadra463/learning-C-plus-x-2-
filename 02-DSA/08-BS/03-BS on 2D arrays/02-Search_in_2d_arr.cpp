#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(target == matrix[i][j]){
                    return true;
                }
            }
        }
        return false;
// The solution uses nested loops to linearly scan all matrix elements, resulting in O(m * n) time complexity.
}

void linearBs(){
    int left = 0;
    int right = matrix[0].size()-1;

    for(int i = 0; i < matrix.size(); i++){
        while(left <= right){
            int mid = (left+right)/2;
            if(matrix[i][mid] == target){
                return true;
            }

            else if(matrix[i][mid] > target){
                right = mid;
            }

            else{
                left = mid + 1;
            }
        }
    }
    return false;
//The solution uses a linear scan over the rows, resulting in O(m log n) time complexity.
}

void optimalBs(){
    int n = matrix.size();
    int m = matrix[0].size();

    int left = 0;
    int right = n * m - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        // on the go converted 2d array into 1 d array
        int row = mid / m;
        /*
        row 0:
        0   1   2   3

        row 1:
        4   5   6   7

        row 2:
        8   9   10  11

        0 / 4 = 0
        1 / 4 = 0
        2 / 4 = 0
        3 / 4 = 0

        4 / 4 = 1
        5 / 4 = 1
        6 / 4 = 1
        7 / 4 = 1

        8 / 4 = 2
        9 / 4 = 2
        10 / 4 = 2
        11 / 4 = 2
        */

        
        int col = mid % m;
        /*
        0 % 4 = 0
        1 % 4 = 1
        2 % 4 = 2
        3 % 4 = 3
        */

        if (matrix[row][col] == target) {
            return true;
        }   

        else if (matrix[row][col] > target) {
            right = mid - 1;
        }

        else {
            left = mid + 1;
        }
    }

    return false;
//solution in O(log(m * n)) time complexity.
}

int main() {
    bruteForce();
    linearBs();
    optimalBs();
    return 0;
}