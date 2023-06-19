#include<bits/stdc++.h>
using namespace std;

// Problem link :- https://leetcode.com/problems/rotate-array/
class Solution {
public:
    void reverseArray(vector<int> &nums, int l, int r) {
        while(l <= r) {
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        // Brute force by me - (34 / 38 testcase passed) - runtimeError
        /* int len = nums.size()-1;

        k = k % nums.size();
        while(k--) {
            int temp = nums[len];
            for(int i=len; i>0; i--) {
                nums[i] = nums[i-1];
            }
            nums[0] = temp;
        } */

        // Better appraoch by love babbar
        /* int len = nums.size();
        vector<int> temp(len);

        for(int i=0; i<len; i++) {
            temp[(i+k) % len] = nums[i];
        }
        nums = temp; */

        // Most Optimal Approach by Striver
        int n = nums.size();
        k = k % n;
        reverseArray(nums, 0, n-k-1);
        reverseArray(nums, n-k, n-1);
        reverseArray(nums, 0, n-1);
    }
};

int main() {

    

    return 0;
}