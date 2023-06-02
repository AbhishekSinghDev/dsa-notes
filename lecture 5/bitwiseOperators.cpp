#include<iostream>
using namespace std;

int main() {

    //? Bitwise Operators
    //! 1. AND 
    //! 2. OR 
    //! 3. NOT 
    //! 4. XOR 

    // 1. AND - both bit should be 1 else output will 0.
    // 2. OR - any one of them can be 1 output will be 1 else 0.
    // 3. NOT - invert the bits 0->1, 1->0.
    // 4. XOR - must be 1 one of them. if both same then output 0.
    int a = 3;
    int b = 5;

    cout<<"a & b: "<<(a&b)<<endl;
    cout<<"a | b: "<<(a|b)<<endl;
    cout<<"a ^ b: "<<(a^b)<<endl;
    cout<<"~a: "<<(~a)<<endl;

    // Left Shift Operators
    int c = 10;
    cout<<"c << 1: "<<(c<<1)<<endl;
    cout<<"c << 2: "<<(c<<2)<<endl;
    cout<<"c << 3: "<<(c<<3)<<endl;

    // Right Shift Operators
    int d = 40;
    cout<<"d >> 1: "<<(d>>1)<<endl;
    cout<<"d >> 2: "<<(d>>2)<<endl;
    cout<<"d >> 3: "<<(d>>3)<<endl;

    return 0;
}