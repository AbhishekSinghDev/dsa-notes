#include<bits/stdc++.h>
using namespace std;

int main() {

    //! Pattern 08
    //*             1
    //*          1  2  1
    //*       1  2  3  2  1
    //*    1  2  3  4  3  2  1  

    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        // printing the left spaces
        for(int j=0; j<n-i-1; j++) {
            cout<<"  ";
        }
        // printing the numbers
        for(int j=0; j<i+1; j++) {
            cout<<j+1<<" ";
        }
        // printing the numbers
        for(int j=i; j>0; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}