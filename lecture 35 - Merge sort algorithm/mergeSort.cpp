#include<iostream>
#include<vector>
using namespace std;

void mergeArray(int *arr, int start, int end, int mid) {

    vector<int> temp;
    // [start....mid]
    // [mid+1....end]

    int low = start;
    int high = mid + 1;

    while(low <= mid && high <= end) {
        if(arr[high] <= arr[low]) {
            temp.push_back(arr[high]);
            high++;
        }
        else {
            temp.push_back(arr[low]);
            low++;
        }
    }

    // left side of array is exhausted
    while(high <= end) {
        temp.push_back(arr[high]);
        high++;
    }

    // right side of array is exhausted
    while(low <= mid) {
        temp.push_back(arr[low]);
        low++;
    }

    // copying elements from temp array to original array
    for(int i = start; i <= end; i++) {
        arr[i] = temp[i - start];
    }
}

void mergeSort(int *arr, int start, int end) {

    // base case - single element is already sorted
    if(start >= end) return;

    // divide divide divide
    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);   // left half
    mergeSort(arr, mid+1, end);     // right half

    // merge the two sorted arrays
    mergeArray(arr, start, end, mid);
}

int main() {

    int arr[] = {5,4,3,7,8,1,0};
    int len = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, len-1);

    for(int i=0; i<len; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;

    return 0;
}