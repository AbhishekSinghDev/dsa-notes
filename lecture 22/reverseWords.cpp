#include<bits/stdc++.h>
using namespace std;

// Problem link: https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        int i = 0;
        for(int i=0; i<s.size(); i++) {
            string temp = "";
            while(i < s.size() && s[i] != ' ') {
                temp.push_back(s[i]);
                i++;
            }

            if(temp.size() != 0) {
                ans = " " + temp + ans;
            }
        } 

        return ans.substr(1);
    }
};

int main() {

    

    return 0;
}