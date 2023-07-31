#include<iostream>
#include<vector>
using namespace std;

// Recursive approach
int getPivotElement(vector<int> &arr, int start, int end) {

    // base case
    if(start >= end) return arr[end];

    int mid = start + (end - start) / 2;

    if(arr[0] < arr[mid]) {
        // i am standing on left line
        return getPivotElement(arr, mid + 1, end);
    }
    else {
        // i am standing on right line
        return getPivotElement(arr, start, mid);
    }
}

int main() {

    vector<int> input = {5,6,7,1,2,3,4};
    int len = input.size();

    cout<<"Pivot Element: "<<getPivotElement(input, 0, len - 1);

    return 0;
}