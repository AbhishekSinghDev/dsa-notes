#include<bits/stdc++.h>
using namespace std;


int pivotInRotatedSortedArray(vector<int>& arr, int n) {

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        }
        else end = mid;

        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(vector<int> &arr, int start, int end, int k) {
    int s = start;
        int e = end;
        int m = s + (e - s) / 2;

        while(s <= e) {
            if(arr[m] == k) {
                return m;
            }
            if(arr[m] > k) {
                e = m - 1;
            }
            else s = m  + 1;

            m = s + (e - s) / 2;
        }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = pivotInRotatedSortedArray(arr, n);
    if(k >= arr[pivot] && k <= arr[n-1]) {
        return binarySearch(arr, pivot, n-1, k);
    }
    else return binarySearch(arr, 0, pivot-1, k);

    // Approach by me 
    // Works on all rotated sorted array but fails on completely sorted array
    /*
    int ans = -1;

    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == k) {
            return mid;
        }

        else if(arr[mid] > arr[0]) {
            start = mid + 1;
        }
        else end = mid;

        mid = start + (end - start) / 2;
    }
    return ans;
    */
}

int main() {

    

    return 0;
}