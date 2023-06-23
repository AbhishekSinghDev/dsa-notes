#include<bits/stdc++.h>
#include<chrono>
auto timeStart = std::chrono::steady_clock::now();
using namespace std;

int binarySearch(vector<vector<int>> arr, int target) {

    int row = arr.size();
    int col = arr[0].size();

    int start = 0;
    int end = (row*col)-1;
    int mid = start + (end - start) / 2;

    while(start <= end) {
        // mid / col = row number
        // mid % col = column number
        int element = arr[mid/col][mid%col];

        if(element == target) return 1;

        if(element < target) start = mid + 1;
        else end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return 0;
}

int main() {

    vector<vector<int>> input = {{5,1,9,11},
                                 {2,4,8,10},
                                 {13,3,6,7},
                                 {15,14,12,16}};
                                 
    int target = 12;
    // TC: O(log(n))
    if(binarySearch(input, target)) cout<<"Element found";
    else cout<<"Element not found";

    auto timeEnd = chrono::steady_clock::now();
    cout<<endl<<"Execution time: "<<chrono::duration<double, milli>((timeEnd-timeStart)/1000).count()<<" Seconds."<<endl;
    return 0;
}