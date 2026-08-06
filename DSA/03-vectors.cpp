// vector is a resizable array
// syntax: vectory<data-type> vectorname = {}
#include <iostream>
#include <vector>
#include <string>
using namespace std;


void explainVector(){
    //declare
    vector<string> cars = {"Volvo", "Thar", "BMW"};
    
    //print
    for (string car : cars){
        cout << car << "\n";
    }
    
    //access
    cout << cars[0] << "\n";
    cout << cars.back() << "\n"; // vector library functions
    cout << cars.front() << "\n";
    
    cout << cars.at(1) << "\n"; // this is prefered over sqaure brackets beacuse it lets you know if an error occurs
    
    // change vector element
    cars[0] = "Fortuner";
    cout << cars[0] << "\n";
    
    cars.at(1) = "Honda"; // this is prefered over sqaure brackets 
    
    // add vector elements
    cars.push_back("Tesla"); // adds an element at the end
    cout << cars.at(3) << "\n"; 
    
    // remove vector elements
    cars.pop_back();
    // cout << cars.at(3) << "\n"; // wil throw error
    
    // vector size
    cout << cars.size() << "\n"; // how many elemts in vector
    
    // check if vector is empty
    cout << cars.empty() << "\n"; // 0 = not empty , 1 = empty
    
    // loop through a vector
    for (int i = 0; i < cars.size(); i++){
        cout << cars[i] << "\n";
    }
    
    for (string car : cars){ // for-each loop
        cout << car << "\n";
    }
}

void explainVector2() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // v = {1, 2}

    vector<pair<int,int>> vec;

    vec.push_back({1, 2});   // vec[0] = {1,2}
    vec.emplace_back(3, 4);  // vec[1] = {3,4}

    cout << v[1] << "\n";          // 2
    cout << vec[1].second << "\n"; // 4

    v.assign(4,100); // v = {100,100,100,100}
    cout << v[1] << "\n";          // 100

    vector<int> v2(4); // {0,0,0,0}

    for (int v : v2) {
        cout << v << ", ";
        // Output:
        // 0, 0, 0, 0,
    }

    vector<int> v3(v2); // Copy of v2 -> {0,0,0,0}
    cout << v3[1] << "\n"; // 0
}

int main() {
    // explainVector();
    explainVector2();
    return 0;
}
