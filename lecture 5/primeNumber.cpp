#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;

    bool isPrime = true;
    for(int i=2; i<n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;    
        }
    }

    if(isPrime) cout<<"Prime Number";
    else cout<<"Not a Prime Number";

    return 0;
}