#include<bits/stdc++.h>
using namespace std;

/* 
* Problem Statement
? Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the     signed 32-bit integer range [-231, 231 - 1], then return 0.Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

! Example: Input: x = 123
!          Output: 321
!          Input: x = -123
!          Output: -321
*/

class Solution {
public:
    int reverse(int x) {
        
        int reverseNumber = 0;
        while(x != 0) {
            int digit = x % 10;

            // ans * 10 > INT_MAX = ans > INT_MAX / 10
            // becoz ans * 10 still leads to overflow and comparing with INT_MAX / 10 is better option
            if((reverseNumber > INT_MAX / 10) || (reverseNumber < INT_MIN / 10)) {
                return 0;
            }
            reverseNumber = reverseNumber * 10 + digit;

            x /= 10;
        }

        return reverseNumber;
    }
};

int main() {

    return 0;
}