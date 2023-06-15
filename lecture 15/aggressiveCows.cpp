#include<bits/stdc++.h>
using namespace std;

/*
    Problem:
    Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.

    Example:
        array: 1,2,4,8,9  &  k=3
        O/P: 3
        Explaination: 1st cow at stall 1 , 2nd cow at stall 4 and 3rd cow at stall 8
*/

bool isPossible(vector<int> &arr, int k, int mid) {
    int cowCount = 1;
    int lastPosition = arr[0];

    for(int i=0; i<arr.size(); i++) {
        if(arr[i] - lastPosition >= mid) {
            cowCount++;
            if(cowCount == k) return true;
            lastPosition = arr[i];
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int maxi = -1;
    for(int i=0; i<stalls.size(); i++) {
        maxi = max(maxi, stalls[i]);
    }
    int end = maxi;
    int mid = start + (end - start) / 2;

    int ans = -1;
    while(start <= end) {
        if(isPossible(stalls, k, mid)) {
            ans = mid;
            start = mid + 1;
        }
        else end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    

    return 0;
}