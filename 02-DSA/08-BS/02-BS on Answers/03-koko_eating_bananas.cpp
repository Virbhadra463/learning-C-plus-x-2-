#include <bits/stdc++.h>
using namespace std;
/*
koko has some piles of banana and certain hours to finish them at min speed.

min banana koko can eat in an hour is 1 and maximum is the max pile he has out of all the piles but we want to finish all the bananas in given time that too slowly.
we use ceiling division and max_element func for this and there are two method to solve it.
*/

void bruteForce(){
    vector<int> piles = {3,6,7,11};
    int h = 8;

    auto element = *max_element(piles.begin(), piles.end()); // here max element gives iterator position of max val in the array ans * gives iterator's position value.

    for(int i = 1; i < element; i++){
        int min_speed = 0;
        for(int j = 0; j < piles.size(); j++){
            min_speed += (piles[j] + i - 1)/i;
        }
        if(min_speed <= h){
            cout << i << "\n"; 
            break;      
        }        
    }
// Time complexity = O(n X M)
// Space complexity = O(1)
}

void binarySearch(){
    vector<int> piles = {3,6,7,11};
    int h = 8;
    
        int left = 1;
        auto right = *max_element(piles.begin(), piles.end());
        
        while (left < right) {

            int mid = (left + right) / 2;
            long long min_speed = 0;
            
            // for (int j = 0; j < piles.size(); j++) {
                //     min_speed += (piles[j] + mid - 1) / mid;
                // }
                
                for (int pile : piles) {                    // this loop saves time as it breaks the loop if our min speed is greater than h
                    min_speed += (pile + mid - 1) / mid;    // this is known as ceiling division, stl library also provides a function for it
                    
                    if (min_speed > h)
                    break;
                }
                if (min_speed <= h) {
                    right = mid;
                }
                
                else {
                    left = mid + 1;
                }
            }
            cout << left;
// Time complexity = O(n X log M) where binary search took log m time and for loop took n time
// Space complexity = O(1)
        }

int main() {
    // bruteForce();
    binarySearch();
    return 0;
}