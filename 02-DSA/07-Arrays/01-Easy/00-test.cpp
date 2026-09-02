#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> arr = {1,2,3,4};
    double median = (arr[arr.size()/2] + (arr[arr.size()/2]-1))/2;
    cout << median;
    return 0;
}