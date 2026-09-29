#include <bits/stdc++.h>
using namespace std;
//Constructor overloading means having multiple constructors in the same class, but with different parameters.


class Car {
public:
    string brand;
    string model;
    int year;

    // 1. No parameters
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }

    // 2. One parameter
    Car(string b) {
        brand = b;
        model = "Unknown";
        year = 0;
    }

    // 3. Two parameters
    Car(string b, string m) {
        brand = b;
        model = m;
        year = 0;
    }
};

int main() {
Car c1;
Car c2("BMW");
Car c3("BMW", "X5");

cout << c1.brand << " " << c1.model << " " << c1.year << "\n";
cout << c2.brand << " " << c2.model << " " << c2.year << "\n";
cout << c3.brand << " " << c3.model << " " << c3.year << "\n";

return 0;
}