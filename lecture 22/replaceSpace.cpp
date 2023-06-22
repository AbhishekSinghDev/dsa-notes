#include<bits/stdc++.h>
using namespace std;

/*
    I/P: Hello i am abhishek
    O/P: Hello@40i@40@am@abhishek
    Explanation: Replace all the spaces with @40
*/

void replaceSpaces(string &s) {

    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            s.erase(i,1);
            s.insert(i,"@40");
        }
    }
}

int main() {

    string input = "you can practice coding on codezen";
    replaceSpaces(input);
    cout<<input;

    return 0;
}