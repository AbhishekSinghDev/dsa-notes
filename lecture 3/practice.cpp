#include<iostream>
using namespace std;

int main() {

    // number is prime or not
    int number;
    cin>>number;

    int isPrime = 1;
    for(int i=2; i<number; i++) {
        if(number % 2 == 0) {
            isPrime = 0;
        }
    }
    if(isPrime) cout<<"Prime";
    else cout<<"Not Prime";

    return 0;
}