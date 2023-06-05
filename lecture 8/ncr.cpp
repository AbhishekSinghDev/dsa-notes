#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r) {
    // nCr = n! / r! * (n-r)!

    int ncr = 1;
    ncr = factorial(n) / (factorial(r) * (factorial(n-r)));

    return ncr;
}

int main() {

    int n = 8;
    int r = 0;
    int ncr = nCr(n, r);
    cout<<"Value of ncr: "<<ncr;

    return 0;
}