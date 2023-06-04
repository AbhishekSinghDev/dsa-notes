#include<bits/stdc++.h>
using namespace std;

//? 2 Ways to convert decimal -> binary
//! 1. Old school method -> "divide by 2 until number != 0 and store all the remainder and read from the reverse." 
//! 2. Optimal method


//- 1st Method(Approach)
void decimalToBinary(int n) {
    vector<int> rem;

    while(n != 0) {
        int temp = n % 2;
        rem.push_back(temp);
        n /= 2;
    }

    for(int i=rem.size()-1; i>=0; i--) {
        cout<<rem[i]<<" ";
    }
}

//- 2nd Method(Approach)
//? some note:
//?     to store in reverse fashion -> ans = (bit * pow(10, i) + ans);
//?     to store in similar fashion -> ans = ans*10 + digit/bit;
void decimal2Binary(int n) {

    int binaryNumber = 0;
    int i = 0;
    while(n != 0) {
        int bit = (n & 1);
        // this formula will reverse also the binary 
        binaryNumber = (bit * pow(10, i) + binaryNumber);
        // binaryNumber = binaryNumber * 10 + bit;
        n >>= 1;
        i++;
    } 

    cout<<binaryNumber;
}

int main() {

    int a = 11;
    // decimalToBinary(a);
    decimal2Binary(a);

    return 0;
}