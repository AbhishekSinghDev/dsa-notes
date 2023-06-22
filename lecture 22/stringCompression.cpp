#include<bits/stdc++.h>
using namespace std;

// Problem link: https://leetcode.com/problems/string-compression/description/
class Solution {
public:
    int compress(vector<char>& chars) {

        int i  =0;
        int n = chars.size();
        int ansIdx = 0;

        while(i<n) {
            int j = i + 1;
            while(j<n && chars[i] == chars[j]) {
                j++;
            }
            // yaha kaab ayenge
            // 1. jaab size khtm ho gyaa 
            // 2. jaab koi dusra char encounter ho gya

            chars[ansIdx++] = chars[i];
            int count = j-i;
            if(count > 1) {
                string cnt = to_string(count);
                for(auto it: cnt) {
                    chars[ansIdx++] = it;
                }
            }
            i=j;
        }
        return ansIdx;
    }
};

int main() {

    

    return 0;
}