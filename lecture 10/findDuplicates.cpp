#include<bits/stdc++.h>
using namespace std;

//- CodeStudio
//? Duplicate In Array
//! Input:  4 2 1 3 1
//! Output:     1

int findDuplicate(vector<int> &arr) 
{
    // Write your code here

    // Brute force thought by me
	// sort(arr.begin(), arr.end());

    // int value = -1;
    // for(int i=1; i<=arr.size(); i++) {
    //     if(arr[i-1] == arr[i]) {
    //         value = arr[i];
    //     }
    // }
    // return value;

    // Optimal using xor
    int ans = 0;
    for(auto it: arr) {
        ans ^= it;
    }

    for(int i=0; i<arr.size(); i++) {
        ans ^= i;
    }

    return ans;
}

int main() {

    

    return 0;
}