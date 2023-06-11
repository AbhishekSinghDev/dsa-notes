#include<bits/stdc++.h>
using namespace std;

/*
? An array arr a mountain if the following properties hold:

! arr.length >= 3
! There exists some i with 0 < i < arr.length - 1 such that:
! arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
! arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
! Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
! 
! You must solve it in O(log(arr.length)) time complexity.

- Example: Input: arr = [0,10,5,2]
           Output: 1
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int len = arr.size();

        // Binary Search
        int start = 0;
        int end = len - 1;
        int mid = start + (end - start) / 2;

        while(start < end) {
            if(arr[mid] < arr[mid + 1]) {
                start = mid  + 1;
            }
            else {
                // why not end = mid - 1;
                // becoz: /\ by doing mid - 1 cause to go to left line
                end = mid;
            }

            mid = start + (end - start) / 2;
        }
        return end;
    }
};

int main() {

    

    return 0;
}