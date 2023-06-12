#include<bits/stdc++.h>
using namespace std;

int pivotInRotatedSortedArray(int arr[], int n) {

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

int main() {

    int arr[] = {1,4,7,8,9,10,12,14,16,20};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Pivot point is: "<<pivotInRotatedSortedArray(arr, n);

    return 0;
}