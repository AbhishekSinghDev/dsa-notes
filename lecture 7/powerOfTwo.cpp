#include<bits/stdc++.h>
using namespace std;

/*
* Problem Statement 
? Given an integer n, return true if it is a power of two. Otherwise, return false.
? An integer n is a power of two, if there exists an integer x such that n == 2x.

! Example: Input: n = 1
!          Output: true
!          Explanation: 20 = 1

!          Input: n = 16
!          Output: true
!          Explanation: 24 = 16
          
!          Input: n = 3
!          Output: false
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int ans = 1;
        for(int i=0; i<=30; i++) {
            if(ans == n) return true;

            // reusing the previous value instead of calculating again and again.
            // using pow function pow(2, i);
            // becoz of use of previous value it calculates till 2^31 and range is (-2^31 <= n <= 2^31-1) 
            // so that's why (ans < INT_MAX / 2) ans *= 2;
            if(ans < INT_MAX / 2) ans *= 2;
        }
        return false;
    }
};

int main() {

    return 0;
}