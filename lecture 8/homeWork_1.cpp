#include<bits/stdc++.h>
using namespace std;

int main() {

    // homework-1
    // breaking the while without using break inside while and but outside swtich.
    // usage of break is allowed inside switch.

    int n = 2;
    while(true) {
        switch(n) {
            case 1:
                cout<<"one"<<endl;
                // inside switch breaks will not affect the while loop 
                // that's why using exit function.
                break;
            case 2:
                cout<<"two"<<endl;
                // one way maybe usage of goto
                goto label;
                break;
            default:
                cout<<"Invalid"<<endl;
        }
    }

    label:
        cout<<"outside";

    return 0;
}