#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;

    while(a != b) {
        if(a>b) a-=b;
        else b-=a;
    }

    return a;
}

int main() {

    int a,b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;

    cout<<"Gcd: "<<gcd(a,b);

    return 0;
}