#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

void rowWiseSum(int arr[][3]) {
    int rowLargest = -1;
    int largestSum = 0;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        if(sum > largestSum) {
            rowLargest = row+1;
            largestSum = sum;
        }
        cout<<row+1<<" Row Sum: "<<sum<<endl;
    }

    cout<<rowLargest<<" Row having the largest sum: "<<largestSum<<endl;
}

int main() {

    int arr[3][3] = {{5,8,3}, {2,9,6}, {5,2,11}};

    rowWiseSum(arr);

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}