Detailed article is here: 
<!-- https://takeuforward.org/hashing/hashing-maps-time-complexity-collisions-division-rule-of-hashing-strivers-a2z-dsa-course -->

Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10]. For each query, we need to find out how many times the number appears in the array. For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0. 

Similarly, the following will be the answers to the given queries:
Brute Force approach:
```bash
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1,2,3,2,1};
    int n = 2;
    int pt = 0;
    int count = 0;

    while(pt<size(arr)){
        if(n == arr[pt]){
            count++;
        }
        pt++;
    }
    
    cout << count;
    return 0;
}
```
**Time Complexity analysis**
The above function contains a for loop that runs for N times. So, the time complexity of the function will be O(N) ignoring the other constant operations. 

Now, for each query, we are calling this function. So, if the query contains 5 numbers and we call the function 5 times, the total time complexity will be O(5*N). If the number of queries is Q, the time complexity will be O(Q*N). 

Now, if the length of the query becomes large like 10^5 and the array size also becomes large like 10^5, the time complexity will be O(10^10).

We know from our previous knowledge that 108 operations take 1 second to get executed. So, 10^10 operations will take around 100 seconds(10^10/10^8). We cannot say a code is good if it takes 100 seconds to get executed.
```bash
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main() {

    int N = 100000;
    int Q = 100000;

    vector<int> arr(N, 2);

    int count = 0;

    auto start = high_resolution_clock::now();

    // Q queries
    for (int q = 0; q < Q; q++) {

        int n = 2;

        // Scan the entire array for every query
        for (int i = 0; i < N; i++) {

            if (arr[i] == n) {
                count++;
            }

        }
    }

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(end - start);

    cout << "Count: " << count << "\n";
    cout << "Time taken: " << duration.count() << " ms\n";

    return 0;
}
# this program takes 21 seconds to run
```

**Optimized approach using Hashing:**
 hashing is nothing but the combination of the steps, pre-storing, and fetching.
```bash
#include <bits/stdc++.h>
using namespace std;

int main() {

    // Take the size of the array
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Take input for every element of the array
    for (int i = 0; i < n; i++) {
        cout << "Enter the val: ";
        cin >> arr[i];
    }


    // Create a hash array of size 13.
    // Index represents the number.
    // Value at that index represents its frequency.
    //
    // Example:
    // hash[2] = 3 means 2 appeared 3 times.
    //
    // Since the maximum possible number is assumed to be 12,
    // we need indices from 0 to 12 → 13 positions.
    int hash[13] = {0};


    // PRE-STORING:
    // Go through every element of the original array
    // and increase its frequency in the hash array.
    for (int i = 0; i < n; i++) {

        // arr[i] is the number we found.
        // Increase the frequency of that number by 1.
        hash[arr[i]] += 1;
    }


    // Take the number of queries
    int q;
    cout << "enter the size of query array: ";
    cin >> q;


    // FETCHING:
    // Process each query.
    // q-- means the loop runs q times.
    while (q--) {

        // Store the number we want to find the frequency of
        int number;

        cout << "Enter the val you wanna query: ";
        cin >> number;

        // Directly access hash[number] to get its frequency.
        // We don't need to loop through the original array again.
        cout << "frequency: " << hash[number] << endl;
    }

    return 0;
}
```
## Character hashing
In order to map the characters we need to use the ASCII values of the respective characters. The ASCII value of lowercase a is 97. So, if we write int x = ‘a’, it will typecast the character, ‘a’, into the ASCII value, 97, and store it in the variable x instead of throwing an error. So, similarly, if we write hash[‘a’], it will signify hash[97]. 

```bash
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter the string: "; // hello
    cin >> s;

    // creating index map of alphabets
    int hash[26] = {0}; //creates an array with 26 times 0
    for(int i = 0; i< s.size(); i++){
        hash[s[i]-'a']++; // inrements the index of that array by +1
    }
    
    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl; // capital A if string is in capital letters
    }
    return 0;
}
```
**Hashing using maps**
// difference learn from main article betwwen why hashing using maping is better than normal hashing.

```bash
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* 
    */
   for(auto it : mp){
           cout << it.first << "->" << it.second << endl;
       }
   
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}
```













