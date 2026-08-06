/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int minDist = min(min(top, bottom), min(left, right));

            cout << n - minDist;
        }
        cout << "\n";
    }

    return 0;
}