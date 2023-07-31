#include<iostream>
using namespace std;

// Binary Search using recursion
bool isPresent(int arr[], int length, int key, int start, int end) {
    // base case
    if(start > end) return false;

    int mid = start + (end - start) / 2;

    if(arr[mid] == key) return true;
    else if(arr[mid] > key) isPresent(arr, length, key, start, mid - 1);
    else isPresent(arr, length, key, mid + 1, end);
}

int main() {

    int input[] = {4,5,6,7,11,78,95,121};
    int len = sizeof(input) / sizeof(input[0]);
    int key = 12;

    cout<<"Is present: "<<isPresent(input, len, key, 0, len-1);   

    return 0;
}