#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(int n) {

    int ans = 0;
    int i = 0;
    while(n != 0) {
        int digit = n % 10;
        if(digit == 1) {
            ans += pow(2, i);
        } 

        n /= 10;
        i++;
    }

    cout<<ans;
}

int main() {

    int n = 1000;
    binaryToDecimal(n);

    return 0;
}