//used in all Data structures excep queue,deque, priority queue
#include <bits/stdc++.h>
using namespace std;
   
int main() {
    // Iterators
    vector<int> v ={10,20,30,40,50};
    vector<int>::iterator it = v.begin();
    // it points to first element (10)
    
    it++;
    // it now points to second element (20)
    cout << *(it) << " " << "\n"; //asterik tells it to go where it is pointing
    
    it = it + 2;
    // it now points to fourth element (40)
    cout << *(it) << " " << "\n"; 
    
    //loop through iterator
    for ( it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";
    }
    
    cout << "_________________" << "\n";
    vector<int>::reverse_iterator rit;
    
    cout << *(it) << " " << "\n"; 
    for (rit = v.rbegin(); rit != v.rend(); ++rit) {
        cout << *rit << "\n";  
    }
    cout << "_________________" << "\n";
    
    /*
    The auto keyword allows the compiler to automatically determine 
    the correct data type, which simplifies the code and makes it more readable:
    
    Instead of this:
    vector<string>::iterator it = cars.begin();
    
    You can simply write this:
    auto it = cars.begin();
    */
   
   
    // Erase func
//    v.erase(v.begin()+1);
   for ( it = v.begin(); it != v.end(); it++){
       cout << *it << "\n";
    }
    cout << "_________________" << "\n";
    
    v.erase(v.begin()+2, v.begin()+4); // start = keep, till end = erase
    for ( it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";
    }
    cout << "_________________" << "\n";
    
    // Insert func
    v.insert(v.begin(),60);
    for ( it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";
    }
    cout << "_________________" << "\n";
    v.insert(v.begin()+1,2,70);
    for ( it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";
    }
    cout << "_________________" << "\n";
    
    // other func
    cout << v.size() << "\n"; // no of elements in vector
    
    v.pop_back(); // pops element at the end
    cout << v.size() << "\n"; 
    
    vector<int> v2 ={10,20,30,40,50};
    v.swap(v2);                        // swaps
    for ( it = v.begin(); it != v.end(); it++){
        cout << *it << "\n";
    }
    
    v.clear(); // clears whole vector
    cout << v.size() << "\n"; 
    
   return 0;
}    