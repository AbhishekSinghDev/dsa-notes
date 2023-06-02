#include<bits/stdc++.h>
using namespace std;

int main() {

    unsigned int n = 0b11111000;
    int ans = 0;

    while(n != 0) {
        if(n & 1) ans++;
        n >>= 1;
    }

    cout<<"Number of set bits: "<<ans;

    return 0;
}