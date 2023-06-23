#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;

        // Binary Search
        while(rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];

            if(element == target) return 1;

            if(element < target) rowIndex++;
            else colIndex--;
        }
        
        return 0;
    }
};

int main() {

    

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}