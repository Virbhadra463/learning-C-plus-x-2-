#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 2;
    int m = 25;
    long long ans;

    int left = 1;
    int right = m;
    
    while(left <= right){
        int mid = (left + right )/2;


        ans = 1;
        for(int i = 0; i < n; i++){
            ans *= mid;
            if(ans > m) break;
        }

        // If mid^n equals m
        if (ans == m) cout << mid;

        // If mid^n is less than m
        if (ans < m) left = mid + 1;

        // If mid^n is more than m
        else right = mid - 1;

    }
    
   
    return 0;
}