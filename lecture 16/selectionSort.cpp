#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i=0; i<n; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {

    int arr[] = {2,4,1,7,4,8,3,2,0,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}