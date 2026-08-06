/*
*********
 *******
  *****
   ***
    *
*/
#include <iostream>
using namespace std;
int n =1;
int main() {
    for (int i = 5; i >= 1; i--){
        n++;
        for (int j = 1; j <= n; j++){
            cout << " ";
        }
        for (int k = 1; k <= (2*i)-1; k++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}