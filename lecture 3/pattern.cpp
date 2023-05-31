#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    //! Pattern 1
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * * 

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }


    //! Pattern 2
    //* 1 1 1 1
    //* 2 2 2 2
    //* 3 3 3 3
    //* 4 4 4 4

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}