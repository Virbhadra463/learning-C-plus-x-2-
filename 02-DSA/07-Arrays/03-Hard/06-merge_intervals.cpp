    #include <bits/stdc++.h>
    using namespace std;

    int main() {
/*
Key Idea:
Sort intervals by start time, then merge overlapping ones by tracking the current end boundary
*/
        vector<vector<int>> intervals = {{1,3},{2,6},{5,10}};
        
        // to store the final output
        vector<vector<int>> output;

        //iterators
        int start = 0;
        int end = 1;

        // sorting 
        sort(intervals.begin(), intervals.end());
        
        // to store current values for comparing
        int currentStart = intervals[0][start];
        int currentEnd = intervals[0][end];

        // to check min and max values from both intervals
        int min_val;
        int max_val;


        for(int i = 0; i < intervals.size() - 1; i++) {

            if(currentEnd >= intervals[i + 1][start]) {

                min_val = min(currentStart, intervals[i + 1][start]);

                max_val = max(currentEnd, intervals[i + 1][end]);
                
                currentStart = min_val;
                currentEnd = max_val;

            }
            else {
                output.push_back({currentStart, currentEnd});
                currentStart = intervals[i+1][start];
                currentEnd = intervals[i+1][end];
            }
        }
        // to push final vals
        output.push_back({currentStart,currentEnd});

        for (auto i : output){
            for(auto n : i){
                cout << n << " ";
            }
            cout << "\n";
        }
/*
complexity:

Time - O(NlogN)
Space - O(n)
*/
        return 0;
    }