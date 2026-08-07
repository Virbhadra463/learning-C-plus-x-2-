/*
A set stores unique elements where they:

Are sorted automatically in ascending order.
Are unique, meaning equal or duplicate values are ignored.
Can be added or removed, but the value of an existing element cannot be changed.
Cannot be accessed by index numbers, because the order is based on sorting and not indexing.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> num = {5,8,9,4,2,6,1};

    for(int n: num){
        cout << n << ", ";
    }
    
    cout<< "\n";
    
    // by default set sorts element from ascending to descending but you can reverse its
    set<int, greater<int>> num2 = {5,8,9,4,2,6,9,9,9,9,1};
    for(int n: num2){
        cout << n << ", ";
    } // it printed 9 one time only as the elements in a set are unique

    cout << "\n";

    auto it = num2.find(2);
    cout << *it << "\n";
    
    cout<< num2.count(9) << "\n";
    
    auto it1 = num2.find(9);
    auto it2 = num2.find(6);
    num2.erase(it1,it2);
    for(int n: num2){
        cout << n << ", ";
    }
    cout << "\n";
    
    set<int> num3 = {1,2,3,5,6,7,8,9};

    auto it3 = num3.lower_bound(4); 
    // Returns an iterator pointing to the first element that is greater than or equal to (>=) x.
    cout<< *it3 << "\n";
    
    auto it4 = num3.upper_bound(1);
    // Returns an iterator pointing to the first element strictly greater than (>) x
    cout<< *it4 << "\n";
     // insert,erase,clear,size,empty and all the commands

    cout << "________________________________________" << "\n";
    //
    // MULTI SET
    // same as set but stores duplicate elements also
    
    multiset<int> num4 = {1,2,3,4,4,4,4,5};
    for (int n : num4){
        cout << n << ",";
    }
    
    cout << "\n";
    
    // num4.erase(4); // deletes all instants of 4
    // for (int n : num4){
        //     cout << n << ",";
        // }
        
        num4.erase(num4.find(4)); // erases single 4
        
    cout << "________________________________________" << "\n";
    //
    // UNORDERED SET    
    // similar to set, it does not stores in sorted order, it has randomized order.
    // lower_bound and upper_bound func does not work, all the other operation works.
    









    return 0;
}