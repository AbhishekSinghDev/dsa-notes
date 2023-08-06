#include<bits/stdc++.h>
using namespace std;

//! Question link - https://leetcode.com/problems/letter-combinations-of-a-phone-number/
class Solution {
public:
    void solve(string &digits, string &ds, vector<string> &res, string mapping[], int i) {

        // base case
        if(i >= digits.size()) {
            res.push_back(ds);
            return;
        }

        int digit = digits[i] - '0';
        string value = mapping[digit];

        for(int j=0; j<value.size(); j++) {
            ds.push_back(value[j]);
            solve(digits, ds, res, mapping, i+1);
            ds.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;

        string ds;

        string mp[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, ds, ans, mp, 0);

        return ans;

    }
};

int main() {

    

    return 0;
}