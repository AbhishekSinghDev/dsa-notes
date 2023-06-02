#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    //! Pattern 02
    //* 1 2 3
    //* 4 5 6
    //* 7 8 9

    int a = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<++a<<" ";
        }
        cout<<endl;
    }

    return 0;
}