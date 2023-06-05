#include<bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    
    for(int i=2; i<n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        cout<<isPrime(n)<<endl;
    }

    return 0;
}