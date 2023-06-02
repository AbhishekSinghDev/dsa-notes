#include<bits/stdc++.h>
using namespace std;

int main() {

    int n1 = 0;
    int n2 = 1;

    int length;
    cin>>length;

    cout<<n1<<" ";
    cout<<n2<<" ";
    for(int i=1; i<=length; i++) {
        int temp = n1+ n2;
        cout<<temp<<" ";
        n1 = n2;
        n2 = temp;
    }

    return 0;
}