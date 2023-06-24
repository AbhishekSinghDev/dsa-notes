#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(isPrime(n)) cout<<"Prime number";
    else cout<<"Not a prime";

    return 0;
}