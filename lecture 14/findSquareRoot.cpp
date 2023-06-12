#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int sqrtInteger(int x) {

        // using binary search
        int start = 0;
        int end = x;
        long long int mid = start + (end - start) / 2;

        long long int ans = 0;

        while(start <= end) {
            long long int temp = mid * mid;
            if(temp == x) {
                return mid;
            }
            if(temp > x) {
                end = mid - 1;
            }
            else {
                ans = mid;
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        return ans;
    }

    double sqrtMorePrecision(long long int tempSolution, int precision, int n) {
        double factor = 1;
        double ans = tempSolution;

        for(int i=0; i<precision; i++) {
            factor /= 10;
            for(double j=ans; j*j<n; j=j+factor) {
                ans = j;
            }
        }
        return ans;
    }
};

int main() {

    Solution s;
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    int precision = 1;
    cout<<"Enter the precision: ";
    cin>>precision;

    long long int intSolution = s.sqrtInteger(x);
    double morePrecisied = s.sqrtMorePrecision(intSolution, precision, x);
    cout<<"Ans: "<<morePrecisied;

    return 0;
}