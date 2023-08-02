#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int length, int start) {

    if(start == length) return;

    // small task
    int min_i = start;
    for(int i=start+1; i<length; i++) {
        if(arr[i] < arr[min_i]) {
            min_i = i;
        }
    }
    swap(arr[start], arr[min_i]);

    selectionSort(arr, length, start+1);

}

int main() {

    int arr[] = {5,4,3,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, len, 0);

    for(int i=0; i<len; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}