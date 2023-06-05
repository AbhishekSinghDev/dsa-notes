#include<bits/stdc++.h>
using namespace std;

// Pass by Value
void passByValue(int n) {
    n++;
    cout<<"Inside function: "<<n<<endl;
}

int main() {

    int n;
    cin>>n;
    // copy of value is passed 
    // original value dosen't get affected
    passByValue(n);

    cout<<"After function call: "<<n<<endl;

    return 0;
}