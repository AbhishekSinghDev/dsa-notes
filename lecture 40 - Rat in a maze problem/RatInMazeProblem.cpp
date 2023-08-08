#include<bits/stdc++.h>
using namespace std;

//! Problem link - https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
bool isSafe(vector<vector<int>> &maze, vector<vector<int>> &visited, int N, int i, int j) {
    if((i >= 0 && i < N) && (j >= 0 && j < N) && visited[i][j] == 0 && maze[i][j] == 1) {
        return true;
    }
    return false;
}

void ratInMaze(vector<vector<int>> &maze, vector<vector<int>> &visited, vector<string> &ans, string &ds, int N, int i, int j) {

    // base case
    if((N-1 == i) && (N-1 == j)) {
        ans.push_back(ds);
        return;
    }

    visited[i][j] = 1;

    if(isSafe(maze, visited, N, i-1, j)) {
        ds.push_back('U');
        ratInMaze(maze, visited, ans, ds, N, i-1, j); // moving upper side
        ds.pop_back();
    }

    if(isSafe(maze, visited, N, i, j+1)) {
        ds.push_back('R');
        ratInMaze(maze, visited, ans, ds, N, i, j+1);   // moving right side
        ds.pop_back();
    }

    if(isSafe(maze, visited, N, i+1, j)) {
        ds.push_back('D');
        ratInMaze(maze, visited, ans, ds, N, i+1, j); // moving down side
        ds.pop_back();
    }

    if(isSafe(maze, visited, N, i, j-1)) {
        ds.push_back('L');
        ratInMaze(maze, visited, ans, ds, N, i, j-1); // moving left side
        ds.pop_back();
    }

    visited[i][j] = 0;
}

int main() {

    vector<vector<int>> input = {{1,0,0,0},
                                 {1,1,0,1},
                                 {1,1,0,0},
                                 {0,1,1,1}};
    
    string ds;
    vector<string> ans;
    vector<vector<int>> visited = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};

    // for(int i=0; i<visited.size(); i++) {
    //     for(int j=0; j<visited[0].size(); j++) {
    //         cout<<visited[i][j]<<" ";
    //     } cout<<endl;
    // }

    ratInMaze(input, visited, ans, ds, 4, 0, 0);

    for(auto it: ans) {
        cout<<it<<" ";
    } cout<<endl;

    return 0;
}