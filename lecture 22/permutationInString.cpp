#include<bits/stdc++.h>
using namespace std;

// Problem link: https://leetcode.com/problems/permutation-in-string/description/
class Solution {
public:
    bool checkEqual(int countS1[26], int countS2[26]) {
        for(int i=0; i<26; i++) {
            if(countS1[i] != countS2[i]) return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        
        // storing the count of all elements of s1
        int countS1[26] = {0};
        for(int i=0; i<s1.size(); i++) {
            int index = s1[i] - 'a';
            countS1[index]++;
        }

        int i=0;
        int windowSize = s1.length();
        int countS2[26] = {0};
        while(i<windowSize && i<s2.length()) {
            int index = s2[i] - 'a';
            countS2[index]++;
            i++;
        }

        if(checkEqual(countS1, countS2)) {
            return 1;
        }

        // processing the remaining elements
        while(i<s2.length()) {
            // adding new element
            char newChr = s2[i];
            int index = newChr - 'a';
            countS2[index]++;

            // removing old element
            char oldChr = s2[i-windowSize];
            index = oldChr - 'a';
            countS2[index]--;

            i++;

            if(checkEqual(countS1, countS2)) {
                return 1;
            }
        }

        return 0;
    }
};

int main() {

    

    return 0;
}