#include<bits/stdc++.h>
using namespace std;

int arrayMin(auto arr[], int length) {
    int min = INT_MAX;
    for(int i=0 ; i<length; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int arrayMax(auto arr[], int length) {
    int max = INT_MIN;
    for(int i=0 ; i<length; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int arr[10] = {2,3,4,5,6,2,9,1,7,3};
    cout<<"Min element: "<<arrayMin(arr, 10)<<endl;
    cout<<"Max element: "<<arrayMax(arr, 10)<<endl;

    return 0;
}