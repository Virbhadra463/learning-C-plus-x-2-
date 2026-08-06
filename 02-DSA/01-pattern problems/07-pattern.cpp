/*
1
01
101
0101
10101
*/

#include <iostream>
using namespace std;
int n = 5;
int main() {
    for (int i = 1; i <= n; i++){
        int start;
        if (i%2 == 1)
        start = 1;
        else
        start = 0;
        for ( int j = 1; j <= i;j++){
            cout << start;

            start = 1 - start;
        }
        cout << "\n";
    }
    return 0;
}