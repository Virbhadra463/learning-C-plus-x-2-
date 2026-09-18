#include <bits/stdc++.h>
using namespace std;

int main() {
vector<vector<int>> matrix = {{1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17}};
int target = 9;
    int n = matrix.size();
    int m = matrix[0].size();

    int left = 0;
    int right = m - 1;

    int ans = false;
    while (left < n && right >= 0) {
        if (matrix[left][right] == target) {
            ans =  true;
        }

        else if (matrix[left][right] > target) {
            right--;
        }

        else {
            left++;
        }
    }

    cout << ans;
    return 0;
}