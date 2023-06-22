#include<bits/stdc++.h>
using namespace std;

/*
    I/P: test
    O/P: t
    Explanation: t-2, e-1, s-1, t appears 2 times so thats why t is the answer
*/

string maxOccurenceChar(string s) {
    
    unordered_map<char, int> um;

    for(int i=0; i<s.size(); i++) {
        um[s[i]]++;
    }

    string ans = "";
    int maxi = 0;
    for(auto it: um) {
        if(it.second > maxi) {
            maxi = it.second;
            ans.clear();
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main() {

    string input = "testsample";
    string ans = maxOccurenceChar(input);

    cout<<"Maximum occured character: "<<ans;
    

    return 0;
}