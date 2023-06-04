#include<bits/stdc++.h>
using namespace std;

void negativeDecimalToBinary(int n) {

    int place_value = 1;
    int ans = 0;
    int i = 0;
    while(!(n == 0 | n == -1)) {
        int bit = (n & 1);
        // ans = (bit * pow(10, i) + ans);
        // ans = ans * 10 + bit;
        ans += bit * place_value;

        place_value *= 10;
        n >>= 1;
        i++;
    }

    cout<<ans;
}

int main() {

    int n;
    cin>>n;
    negativeDecimalToBinary(n);

    return 0;
}