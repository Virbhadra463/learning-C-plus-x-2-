#include <bits/stdc++.h>
using namespace std;
// Approach:
// 1. Create a frequency map to count the occurrences of each character in the string.
// 2. Use a priority queue to sort the characters based on their frequencies in decreasing order.
// 3. Iterate through the priority queue and append the characters to a new string according to their frequencies.
int main() {
    string s = "Tree";
    
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    priority_queue<pair<int, char>> pq;
    for (auto it : mp) {
        pq.push({ it.second, it.first });
    }

    string ans = "";
    while (!pq.empty()) {
        auto current = pq.top();
        pq.pop();
        ans.append(current.first, current.second); // here current.first is how many times to append and current.second is what to append
    }
    cout << ans;
    return 0;   
}