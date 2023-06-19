#include<bits/stdc++.h>
using namespace std;

// Problem link :- https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution {
public:
    bool check(vector<int>& nums) {
        
        // Finding the count of pairs nums[i-1] > nums[i]
        // inorder to true as ans there must be <= 1 pair
        // if more than 1 pair exist return false

        int count = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1] > nums[i]) {
                count++;
            }
        }
        
        if(nums[nums.size()-1] > nums[0]) {
            count++;
        }

        return count<=1;
    }
};

int main() {

    

    return 0;
}