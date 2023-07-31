#include<bits/stdc++.h>
using namespace std;

//! Implementation using Recursive Approach

int findFirstOccurrence(vector<int> &arr, int key, int start, int end, int ans) {

    // base case
    if(start > end) return ans;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) {
        return findFirstOccurrence(arr, key, start, mid - 1, mid);
    }
    else if(arr[mid] < key) return findFirstOccurrence(arr, key, mid + 1, end, ans);
    else return findFirstOccurrence(arr, key, start, mid - 1, ans);

}

int findLastOccurrence(vector<int> &arr, int key, int start, int end, int ans) {

    // base case
    if(start > end) return ans;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) {
        return findLastOccurrence(arr, key, mid + 1, end, mid);
    }
    else if(arr[mid] < key) return findLastOccurrence(arr, key, mid + 1, end, ans);
    else return findLastOccurrence(arr, key, start, mid - 1, ans);

}

int main() {

    vector<int> input = {1,1,1,1,2,3,4,5,7,8,9};
    int len = input.size() - 1;
    cout<<"First Occurrence: "<<findFirstOccurrence(input, 2, 0, len, -1)<<endl;
    cout<<"Last Occurrence: "<<findLastOccurrence(input, 2, 0, len, -1);

    return 0;
}