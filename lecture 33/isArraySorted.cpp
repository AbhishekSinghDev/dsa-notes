#include<iostream>
using namespace std;

bool isSorted(int arr[], int length, int i) {
    // base case
    if(length == 1 || length == 0) return true;
    if(i >= length) return true;

    if(arr[i-1] > arr[i]) return false;
    return isSorted(arr, length, i+1);
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"isSorted: "<<isSorted(arr, n, 1);

    return 0;
}