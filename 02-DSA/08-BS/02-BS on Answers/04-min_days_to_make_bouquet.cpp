    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        vector<int> bloomDay = {1,10,3,10,2};
        int m = 3;
        int k = 1;
        
        int min_days;

        //pointers
        int left = 1;
        int right = *max_element(bloomDay.begin(), bloomDay.end()); // here the max element iterates through array and gives max vals index and * gives us the value

        while(left <= right){
            int mid = (left + right)/2; // left + (left + right)/2

            for(int i = m; i > 0; i--){
                for(int j = k; j > 0; j--){
                    
                }
            }


        }


        return 0;
    }