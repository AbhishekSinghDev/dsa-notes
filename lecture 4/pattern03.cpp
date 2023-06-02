#include<iostream>
using namespace std;

int main() {

    //! Pattern 03
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }

    //! Pattern 3.1
    //* A
    //* B B 
    //* C C C 
    //* D D D D 

    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout<<char(65+i)<<" ";
        }
        cout<<endl;
    }

    return 0;
}