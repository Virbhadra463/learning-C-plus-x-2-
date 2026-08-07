/*
A map stores elements in "key/value" pairs.

Elements in a map are:

Accessible by keys (not index), and each key is unique.
Automatically sorted in ascending order by their keys.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> people = {{"Vir",19}, {"Luke",21}, {"Mike", 30}};
    cout << people["Luke"] << "\n";
    
    cout << people["Vir"] << "\n";


    people["Mike"] = 40; //change elements value

    people["Sarah"] = 60;
    people.insert({"Bonnie",70});

    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30}); // will keep the first one and not this
// key should be unique , value can be same.

    people.erase("Vir");
//should use auto key word to loop through maps
    for (auto p : people){
        cout << p.first << " is: " << p.second << "\n";
    }// use first and second function to print both key and value pairs

// mutlimap
// same as map but it can store multiple keys, sorted order.

// unordered map
// same as unorderd set and set
    return 0;
}