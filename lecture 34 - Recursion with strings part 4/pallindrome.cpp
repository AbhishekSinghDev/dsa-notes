#include<iostream>
using namespace std;

bool isPallindrome(string &s, int left, int right) {

    if(left > right) return true;

    if(s[left] != s[right]) return false;

    return isPallindrome(s, left+1, right-1);
}

int main() {

    string s = "nooaoooon";

    cout<<"is pallindrome: "<<isPallindrome(s, 0, s.size()-1);

    return 0;
}