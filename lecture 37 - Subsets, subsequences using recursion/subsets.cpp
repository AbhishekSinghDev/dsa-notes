#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void generatePowerset(vector<int> &nums, vector<int> &ds, vector<vector<int>> &res, int i) {

        // base case
        if(i >= nums.size()) {
            res.push_back(ds);
            return;
        }

        // pick it
        ds.push_back(nums[i]);
        generatePowerset(nums, ds, res, i+1);
        ds.pop_back();

        // do not pick it
        generatePowerset(nums, ds, res, i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        generatePowerset(nums, ds, res, 0);

        return res;
    }
};

int main() {

    

    return 0;
}