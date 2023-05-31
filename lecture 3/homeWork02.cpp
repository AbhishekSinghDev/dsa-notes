#include<iostream>
using namespace std;

int main() {

    // print the sum of all even numbers from 1 to 10
    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {
        if(i % 2 == 0) {
            cout<<i<<" ";
        }
    }

    return 0;
}