#include<bits/stdc++.h>
using namespace std;

int isEven(int n) {
    //? as we all know
    //! n & 1 -> if n = 000b010, then & with 1 to last bit will lead to 0 which means even number.
    //! n & 1 -> if n = 000b111, then & with 1 to last bit will lead to 1 which means odd.
    return (n&1);
}

int main() {

    int n;
    cin>>n;
    if(isEven(n)) cout<<"Odd";
    else cout<<"Even";

    return 0;
}