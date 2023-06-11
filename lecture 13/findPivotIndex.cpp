#include<bits/stdc++.h>
using namespace std;

// Problem statement
/*
-   Find Pivot Index
! - Given an array of integers nums, calculate the pivot index of this array.
! - The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
! - If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
! - Return the leftmost pivot index. If no such index exists, return -1.

? Example 1:
? Input: nums = [1,7,3,6,5,6]
? Output: 3
? Explanation:
? The pivot index is 3.
? Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
? Right sum = nums[4] + nums[5] = 5 + 6 = 11

*/

// Partially submitted - approach by me
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;


        // Passed almost 250+ testCases
        int ans = -1;

        while(start <= end) {
            int leftSum = 0;
            int rightSum = 0;

            // calculating left sum
            for(int i=0; i<mid; i++) {
                leftSum += nums[i];
            }

            // calculating right sum
            for(int i=mid+1; i<nums.size(); i++) {
                rightSum += nums[i];
            }

            // cout<<mid<<" ";
            if(leftSum < rightSum && -leftSum > -rightSum) {
                start = mid + 1;
            }
            else if(leftSum > rightSum && -leftSum < -rightSum) {
                end = mid - 1;
            }
            else {
                ans = mid;
                // required a break becoz it does the same thing again and again
                return ans;
            }

            mid = start + (end - start) / 2;
        }

        return ans;
    }
};

int main() {

    

    return 0;
}