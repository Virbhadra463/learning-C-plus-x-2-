#include <bits/stdc++.h> // all the libraries included
using namespace std;

// Pairs
int main() {
    pair<int, int> p ={1,3};
    cout << p.first << " " << p.second << "\n";


    pair<int, pair<int,int>> d = {1,{2,3}};
    cout<< d.first << " " << d.second.first << " " << d.second.second << "\n";

    pair <int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[2].second;
}




