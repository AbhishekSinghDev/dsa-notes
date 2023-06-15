#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    
    // insertion sort
    for(int i=0; i<=n-1; i++) {
        int j = i;
        while(arr[j-1] > arr[j] && j > 0) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main() {

    int arr[] = {5,4,6,3,6,2,1,8,1,9,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}