#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
vector<vector<int>> mat = {{1,1,1},{0,0,1},{0,0,0}};
int max_count = INT_MIN;
int index;
for (int i = 0; i < mat.size(); i++) {
    int count = 0;
    for (int j = 0; j < mat[i].size(); j++) {
        if (mat[i][j] == 1) {
            count++;
        }
    }
    if (count > max_count) {
        max_count = count;
        index = i;
    }
}
cout << index << max_count;
// Time Complexity:O(n X m), where n = given row number, m = given column number. We are using nested loops running for n and m times respectively.
// Space Complexity: O(1). No extra space used
}

void binarySearch(){
    vector<vector<int>> mat = {{1,1,1},{0,0,1},{0,0,0}};
    


}

int main() {
    bruteForce();
    binarySearch();
    return 0;
}