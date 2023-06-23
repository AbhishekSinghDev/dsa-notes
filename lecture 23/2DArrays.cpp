#include<bits/stdc++.h>
#include<chrono>
using namespace std;

auto start = chrono::steady_clock::now();

int main() {

    //! 2D Arrays

    // arr[row][column]
    // arr[3][4], row=3, column=4
    int arr1[3][4];
    int arr2[3][4];

    // HardCode the sample
    // by default it takes input row wise
    int sample1[2][3] = {1,2,3,4,5,6};
    int sample2[2][3] = {{1,2,3}, {4,5,6}};
    for(int row=0; row<2; row++) {
        for(int col=0; col<3; col++) {
            cout<<sample2[row][col]<<" ";
        }
        cout<<endl;
    }

    // Taking input
    // 2 Ways to taking input

    // 1. Row wise - input
    cout<<endl<<"Enter values for 1st array: ";
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cin>>arr1[row][col];
        }
    }

    // 2. Column wise - input
    cout<<endl<<"Enter values for 2nd array: ";
    for(int col=0; col<4; col++) {
        for(int row=0; row<3; row++) {
            cin>>arr2[row][col];
        }
    }

    // Printing the array
    cout<<endl<<"Input row wise: "<<endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout<<arr1[row][col]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    cout<<"Input column wise: "<<endl;
    for(int row=0; row<3; row++) {
        for(int col=0; col<4; col++) {
            cout<<arr2[row][col]<<" ";
        }
        cout<<endl;
    }

    auto end = chrono::steady_clock::now();
    cout<<"Execution time: "<<chrono::duration<double, milli>((end-start)/1000).count()<<" Seconds."<<endl;
    return 0;
}