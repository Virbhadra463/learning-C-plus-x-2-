#include <bits/stdc++.h>
using namespace std;

void optimalApproach(){
    
    int x = 36; 
    
        int left = 0;
        int right = x;

        int ans;
        // Handle small numbers directly
        if (x < 2) cout <<  x;


        while (left <= right) {
            long long mid = (left + right) / 2;  // Use long long when the number or calculation might exceed the range of int.

            if (mid * mid <= x) {
                ans = mid;
                left = mid + 1;
            }

            else {
                right = mid - 1;
            }
        }
        cout << ans;
    }



int main() {
    optimalApproach();
    return 0;
}