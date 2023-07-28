#include<iostream>
using namespace std;

/*
    ! What is inline fuctions
    ? Copies the written code in the main function where function is called
    ? Use inline function when function contain 1 line and called multiple times

    ! Why use inline function
    ? Reduces function call overhead
    ? Reduces function call from stack
    ? Increases Efficiency
    ? Increases Performance
*/

inline int getMax(int &a, int &b) {
    return (a>b) ? a : b;
}

int main() {

    int a = 5;
    int b = 6;

    int ans;
    ans = getMax(a, b);
    cout<<"Greater: "<<ans<<endl;

    a += 6;
    b += 2;

    ans = getMax(a, b);
    cout<<"Greater: "<<ans<<endl;


    return 0;
}