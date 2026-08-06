/*
A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
However, two major differences between lists and vectors are:

You can add and remove elements from both the beginning and at the end of a list, while vectors are generally 
optimized for adding and removing at the end.

Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, 
or access elements by index numbers
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> list = {1,2,3,4,5};
    for(int l : list){
        cout << l << ",";
    }
    cout << "\n";
    
    // cannot access list with index numbers
    
    // all func are same as vector only these two are additional
    list.push_front(6);
    list.emplace_front(7);
    
    for(int l : list){
        cout << l << ",";
    }
    return 0;
}