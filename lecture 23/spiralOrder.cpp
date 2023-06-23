#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {

    vector<int> res;

    int row = matrix.size();
    int col = matrix[0].size();

    // Index's
    int startingRow = 0;
    int endingRow = row-1;
    int startingCol = 0;
    int endingCol = col-1;

    int elementsVisisted = 0;
    int totalElements = row*col;

    while(elementsVisisted < totalElements) {

        // Starting row -->
        for(int index=startingCol; elementsVisisted < totalElements && index<=endingCol; index++) {
            res.push_back(matrix[startingRow][index]);
            elementsVisisted++;
        }
        startingRow++;

        // Ending column downwards direction
        for(int index=startingRow; elementsVisisted < totalElements && index<=endingRow; index++) {
            res.push_back(matrix[index][endingCol]);
            elementsVisisted++;
        }
        endingCol--;

        // Ending row <-- left direction
        for(int index=endingCol; elementsVisisted < totalElements && index>=startingCol; index--) {
            res.push_back(matrix[endingRow][index]);
            elementsVisisted++;
        }
        endingRow--;

        // Starting column upwards direction
        for(int index=endingRow; elementsVisisted < totalElements && index>=startingRow; index--) {
            res.push_back(matrix[index][startingCol]);
            elementsVisisted++;
        }
        startingCol++;
    }

    return res;
}

int main() {

    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // TC: O(n*m)
    // SC: O(1)
    vector<int> result = spiralOrder(matrix);

    for(auto it: result) {
        cout<<it<<" ";
    }

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}