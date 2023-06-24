#include<bits/stdc++.h>
using namespace std;

// Using Fast Exponentiation
// Formula: a^b = ((a^2)^b/2)
// This formula will reduce the time complexity from o(n) to o(log n)
long fastExponentiations(long x, long n) {
    long ans = 1;

    while(n > 0) {
        if(n & 1 == 1) {
            // odd case
            ans = 1LL * (ans * x);
        }

        x = 1LL * x*x;
        n >>= 1;
    }

    return ans;
}

int main() {

    int x,y;
    cout<<"Enter number and his power respectively: ";
    cin>>x>>y;

    cout<<"Ans: "<<fastExponentiations(x, y);

    return 0;
}