#include<iostream>
using namespace std;

// Recursive approach - using binary search
long long int getSquareRoot(long long int number, long long int start, long long int end) {

    // base case
    if(start >= end) return start; 

    long long int mid = start + (end - start) / 2;
    long long int temp = mid * mid;

    if(temp == number) {
        return mid;
    }
    else if(temp > number) {
        return getSquareRoot(number, start, mid - 1);
    }
    else 
        return getSquareRoot(number, mid + 1, end);
}

int main() {

    long long int n;
    cout<<"Enter number: ";
    cin>>n;

    cout<<"Square root: "<<getSquareRoot(n, 0, n);
    

    return 0;
}