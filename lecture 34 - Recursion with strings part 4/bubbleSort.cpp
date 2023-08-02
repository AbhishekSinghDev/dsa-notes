#include<iostream>
using namespace std;

void bubbleSort(int arr[], int length) {

    if(length == 0 || length == 1) return;

    for(int i=0; i<length-1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, length-1);
}

int main() {

    int arr[] = {6,5,3,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, len);

    for(int i=0; i<len; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}