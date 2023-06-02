#include<bits/stdc++.h>
using namespace std;

int main() {

    //! Pattern 04
    //* A A A 
    //* B B B 
    //* C C C 

    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        char start = 65+i;
        for(int j=0; j<n; j++) {
           cout<<start<<" ";
        }
        cout<<endl;
    }

    cout<<" "<<endl;

    //! Pattern 4.1
    //* A B C D E 
    //* F G H I J 
    //* K L M N O 
    //* P Q R S T 
    //* U V W X Y   
    
    char st = 65;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<st<<" ";
            st++;
        }
        cout<<endl;
    }

    return 0;
}