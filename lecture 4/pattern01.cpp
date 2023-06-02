#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    //! Pattern 01
    //* 1 2 3 4 5
    //* 1 2 3 4 5
    //* 1 2 3 4 5
    //* 1 2 3 4 5
    //* 1 2 3 4 5

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

    //! Pattern 1.1
    //* 5 4 3 2 1
    //* 5 4 3 2 1 
    //* 5 4 3 2 1
    //* 5 4 3 2 1
    //* 5 4 3 2 1

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<n-j<<" ";
        }
        cout<<endl;
    }

    return 0;
}