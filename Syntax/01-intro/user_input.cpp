// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
// cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

#include <iostream>
using namespace std;


int calculator(){
    int x, y, z;
    cout << "\nEnter the first num: ";
    cin >> x;
    cout << "Enter the second num: ";
    cin >> y;
    cout << "Total is: " << x+y;
    return 0;
}

int main(){
    int x;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: " << x;
    calculator();
    return 0;
}
