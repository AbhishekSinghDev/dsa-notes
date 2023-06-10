#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

void sort012(int arr[], int n) {
    int left = 0;
    int right = n-1;
 
    while(left < right) {
        while(arr[left] == 0 && left < right) {
            left++;
        }
        while(arr[right] == 1 && left < right) {
            right--;
        }

        // now arr[left] = 1 , arr[right] = 0
        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {

    int arr[10] = {0,1,1,1,2,1,0,0,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);
    printArray(arr, n);

    return 0;
}