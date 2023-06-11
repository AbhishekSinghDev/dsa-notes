#include<bits/stdc++.h>
using namespace std;

// Find first and last occurence of key. (0-based indexing)
// Repeation allowed
int firstOccurence(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;

    int ans = -1;
    while(start<=end) {
        if(arr[mid] == key) {
            ans = mid;
            // moving towards left part
            end = mid - 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;

    int ans = -1;
    while(start<=end) {
        if(arr[mid] == key) {
            ans = mid;
            // moving towards right part
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    int arr[] = {1,2,3,3,3,3,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout<<"First occurence: "<<firstOccurence(arr, n, key)<<endl;
    cout<<"Last occurence: "<<lastOccurence(arr, n, key);

    return 0;
}