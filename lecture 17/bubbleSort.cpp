#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i=0; i<n; i++) {
        for(int j=1; j<=n; j++) {
            if(arr[j-1] > arr[j]) {
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

int main() {

    int arr[] = {4,3,5,7,4,7,2,1,0,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}