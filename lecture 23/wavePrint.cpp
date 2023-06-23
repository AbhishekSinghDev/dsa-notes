#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

void myWavePrint(int arr[][4]) {
    // Wave print
    int col = 0;
    while(col < 4) {

        // This loop going downwards 
        for(int row=0; row<3; row++) {
            cout<<arr[row][col]<<" ";
        }

        if(col+1 < 4) col++;
        else break;

        // This loop going upwards
        for(int row=2; row>=0; row--) {
            cout<<arr[row][col]<<" ";
        }

        col++;
    }
}

void babbarWavePrint(int arr[][4]) {
    for(int col=0; col<4; col++) {
        if(col&1) {
            // Odd case
            for(int row=2; row>=0; row--) {
                cout<<arr[row][col]<<" ";
            }
        }
        else {
            // Even case
            for(int row=0; row<3; row++) {
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main() {

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // myWavePrint(arr);
    cout<<endl;
    babbarWavePrint(arr);

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}