#include<iostream>
using namespace std;

// Linear Search using recursion
bool isPresent(int arr[], int length, int key, int i) {
    // base case
    if(i >= length) return false;

    if(arr[i] == key) return true;
    return isPresent(arr, length, key, i+1);
}

int main() {

    int input[] = {3,4,1,5,6};
    int len = sizeof(input) / sizeof(input[0]);

    cout<<"Is Present: "<<isPresent(input, len, 0, 0);

    return 0;
}