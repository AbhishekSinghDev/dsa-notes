#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

// Catch:- this is compulsory to provide column value while passing 2d array to a function. Otherwise it gives error.
bool isPresent(int arr[][3], int target) {
    for(int row=0; row<2; row++) {
        for(int col=0; col<3; col++) {
            if(target == arr[row][col]) {
                return true;
                break;
            }
        }
    }

    return false;
}

int main() {

    int arr[2][3]; // 2x3 = 6 elements

    // Taking Input
    cout<<"Enter the array: ";
    for(int row=0; row<2; row++) {
        for(int col=0; col<3; col++) {
            cin>>arr[row][col];
        }
    }

    // Printing Array
    for(int row=0; row<2; row++) {
        for(int col=0; col<3; col++) {
            cout<<arr[row][col]<<" ";
        }
    }

    int target;
    cout<<endl<<"Enter the element you want to search: ";
    cin>>target;

    // LinearSearch
    if(isPresent(arr, target)) cout<<"Element is present.";
    else cout<<"Element is not present."<<endl;

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}