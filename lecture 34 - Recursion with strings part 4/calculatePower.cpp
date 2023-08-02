#include<iostream>
using namespace std;

// calculate power
int getPower(int a, int b) {

    if(b <= 0) return 1;

    return a * getPower(a, b-1);
}

// calculate power using binary search more optimised way
int getPow(int a, int b) {

    if(b <= 0) return 1;
    if(b == 1) return a;

    int ans = getPow(a, b/2);
    if(b & 1) {
        return a * ans * ans;
    }
    else {
        return ans * ans;
    }
}

int main() {

    int n;
    cout<<"Enter a: ";
    cin>>n;

    int b;
    cout<<"Enter b: ";
    cin>>b;

    cout<<"Power: "<<getPower(n, b)<<endl;
    cout<<"Power: "<<getPow(n, b);

    return 0;
}