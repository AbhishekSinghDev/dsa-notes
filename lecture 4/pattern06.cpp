#include<bits/stdc++.h>
using namespace std;

int main() {

    //! Pattern 06
    // * * * * 
    // * * *
    // * *
    // *

    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<=n-i-1; j++) {
            cout<<"* ";
        }
        cout<<endl;
    } 

    return 0;
}