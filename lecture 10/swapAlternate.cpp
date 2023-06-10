#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int n) {

    if(n == 1) return;

    for(int i=1; i<=n; i=i+2) {
        swap(arr[i], arr[i-1]);
    }
}

int main() {

    int input[] = {2};
    int size = sizeof(input) / sizeof(input[0]);

    swapAlternate(input, size);
    printArray(input, size);

    return 0;
}