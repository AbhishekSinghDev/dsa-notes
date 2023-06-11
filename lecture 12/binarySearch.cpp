#include<bits/stdc++.h>
using namespace std;

//- Binary Search 
//? Tc- 0(log n).
//? Sc - 0(1).
int binarySearch(int arr[], int n, int key) {

    int start = 0;
    int end = n-1;
    //! int mid = (start + end) / 2; 
    // this is correct but coz 1 problem
    // let say start = 2^31-1, end = 2^31-1. then addition of these two (start + end) will 
    // cause and overflow to prevent this.
    int mid = start + (end - start) / 2;

    while(start<=end) {

        // comparing with mid
        if(arr[mid] == key) {
            return mid;
        }

        // move to right half
        if(arr[mid] < key) start = mid+1;
        // move to left half
        else end = mid-1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {

    // Condition - Array should be sorted either in increasing or decreasing order.
    int even[10] = {3,4,5,8,9,10,12,33,88,90};
    int odd[9] = {1,2,3,4,7,8,9,10,88};

    cout<<binarySearch(even, 10, 10)<<endl;
    cout<<binarySearch(odd, 9, 7)<<endl;

    return 0;
}