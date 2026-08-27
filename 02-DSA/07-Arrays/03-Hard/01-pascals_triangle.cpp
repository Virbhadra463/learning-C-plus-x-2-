#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> generate;
    vector<vector<int>> triangle;
    int n = 5;
    

    for(int i = 0; i < n; i++){
        vector<int> row(i+1,1);

        for(int j = 1; j < i; j++){
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

    }


    return 0;
}