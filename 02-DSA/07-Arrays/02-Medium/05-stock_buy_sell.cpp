#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> prices = {7,1,5,3,6,4};
        int buy = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else {
                profit = max(profit, prices[i] - buy);
            }
        }
    cout << "BUY: " << buy << "\n";
    cout << "PROFIT: " << profit;
/*
Time complexity = O(n)
Space complexity = O(1)
*/    
    return 0;
}