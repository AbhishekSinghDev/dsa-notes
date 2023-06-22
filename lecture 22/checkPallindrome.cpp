#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string s) {
    int start = 0;
    int end = s.size()-1;

    while(start<end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {

    string n = "noon";
    cout<<isPallindrome(n);

    return 0;
}