#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

// Approach by me - Extra space used
vector<vector<int>> rotateImage(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> res(row, vector<int> (col));

    // Rotating Matrix by 90 degree's
    int currCol = col-1;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            res[j][currCol] = matrix[i][j];
        }
        currCol--;
    }

    return res;
}

// Approach by me - Optimised the extra space
void rotateArray(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    // Optimised approach
    // *
    // * *
    // * * *

    // using the above star pattern way to run loops and swapping the diagonals.
    // above star pattern used to transpose the matrix

    for(int i=0; i<row; i++) {
        for(int j=0; j<i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Rotate every row
    for(int i=0; i<row; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {

    vector<vector<int>> input = {{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int>> ans = rotateImage(input);
    rotateArray(input);

    // for(int i=0; i<ans.size(); i++) {
    //     for(int j=0; j<ans[0].size(); j++) {
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0; i<input.size(); i++) {
        for(int j=0; j<input[0].size(); j++) {
            cout<<input[i][j]<<" ";
        }
        cout<<endl;
    }

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}