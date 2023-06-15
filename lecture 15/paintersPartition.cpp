#include<bits/stdc++.h>
using namespace std;

/*
    Problem:
    Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘K’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.

    Example:
        input - 4 2
                5 5 5 5
        output - 10

*/

bool isPossible(vector<int> &arr, int len, int k, int mid) {
    int painterCount = 1;
    int painterSum = 0;

    for(int i=0; i<len; i++) {
        if(arr[i] + painterSum <= mid) {
            painterSum += arr[i];
        }
        else {
            painterCount++;
            if(painterCount > k || arr[i] > mid) return false;
            painterSum = arr[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int len = boards.size();

    int start = 0;
    int sum = 0;
    for(int i=0; i<len; i++) {
        sum += boards[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;

    int ans = -1;
    while(start <= end) {
        if(isPossible(boards, len, k, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else start = mid + 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    

    return 0;
}