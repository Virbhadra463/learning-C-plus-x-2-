#include <iostream>
using namespace std;

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1); // Recursion is the technique of making a function call itself.
  } else {
    return 0;
  }
}

void countdown(int n){
    if ( n > 0 ){
        cout << n << "\n";
        countdown(n-1);
    }
}

int fact(int i){
    if (i>1){
        return i * fact(i-1);
    }
    else{
        return 1;
    }
}

int main() {
    int result = sum(10);
    cout << result;

    countdown(10);

    cout << fact(5);
    return 0;
}