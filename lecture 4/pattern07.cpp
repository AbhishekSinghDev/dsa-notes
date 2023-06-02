#include<bits/stdc++.h>
using namespace std;

int main() {

    //? HomeWorks

    //! Pattern 01
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    int n;
    cin>>n;
    cout<<"Pattern 01"<<endl;
    for(int i=0; i<n; i++) {
        // printting spaces
        for(int j=0; j<i; j++) {
            cout<<"  ";
        }
        // printing numbers
        for(int j=0; j<n-i; j++) {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //! Pattern 02
    //*         1
    //*       2 2
    //*     3 3 3
    //*   4 4 4 4   
    cout<<"Pattern 02"<<endl;
    for(int i=0; i<n; i++) {
        // printing spaces
        for(int j=0; j<n-i-1; j++) {
            cout<<"  ";
        }
        // printint numbers
        for(int j=0; j<=i; j++) {
            cout<<i+1<<" "; 
        }
        cout<<endl;
    }

    cout<<endl;
    
    //! Pattern 03
    //* 1 2 3 4
    //*   2 3 4
    //*     3 4
    //*       4

    cout<<"Pattern 03"<<endl;
    for(int i=0; i<n; i++) {
        // printing spaces
        for(int j=0; j<i; j++) {
            cout<<"  ";
        }
        // printing the numbers
        for(int j=0; j<n-i; j++) {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }


    return 0;
}