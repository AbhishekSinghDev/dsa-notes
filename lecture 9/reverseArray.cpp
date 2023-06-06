#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int len) {

    // reversing the array
    int left = 0;
    int right = len-1;

    while(left < right) {
        swap(arr[left++], arr[right--]);
    }
}

void printArray(auto arr[], int length) {
    for(int i=0; i<length; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    reverseArray(arr, 11);
    printArray(arr, 11);


    return 0;
}