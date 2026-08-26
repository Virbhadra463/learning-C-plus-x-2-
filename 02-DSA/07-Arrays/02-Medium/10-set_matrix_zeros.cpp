#include <bits/stdc++.h>
using namespace std;

void bruteForce(){
// 0(0,1,2) || 1(0,1,2) || 2(0,1,2)
vector<vector<int>> matrix = {
    {1, 1, 1},
    {1, 0, 1},
    {1, 1, 1}
};

for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[i].size(); j++){
        cout << matrix[i][j] << " ";
    }
    cout << "\n";
}

for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[i].size(); j++){
        
        if(matrix[i][j] == 0){
            for(int col = 0; col < matrix[0].size(); col++){
                if(matrix[i][col] != 0){
                    matrix[i][col] = -1;              // i stays fixed while column changes
                }
            }            
            for(int row = 0; row < matrix.size(); row++){
                if(matrix[row][j] != 0){             // j stays fixed while row changes
                    matrix[row][j] = -1;
                }
            }
        }
    }
}
for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[i].size(); j++){
        if(matrix[i][j] == -1){
            matrix[i][j] = 0;
        }
    }
}

cout << "\nMatrix AFTER:\n";
for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[i].size(); j++){
        cout << matrix[i][j] << " ";
    }
    cout << "\n";
}
// Time  = O(n × m × (n + m))
// Square matrix → O(n³)

// Space = O(1)
}

void optimalApproach(){
// 0(0,1,2) || 1(0,1,2) || 2(0,1,2)
vector<vector<int>> matrix = {
    {1, 1, 1},
    {1, 0, 1},
    {1, 1, 1}
};

for(int i = 0; i < matrix.size(); i++){
    for(int j = 0; j < matrix[i].size(); j++){
        cout << matrix[i][j] << " ";
    }
    cout << "\n";
}


}





int main() {


    return 0;
}