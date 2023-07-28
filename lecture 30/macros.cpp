#include<iostream>
using namespace std;

#define PI 3.14

// !Samething can be achieved by variable also or by making constants why using #define
// ? Dosen't occupy memory
// ? It just replace the name with value
// ? Unlike variables they occupy memory but #define dosen't occupy memory
// ? Cannot be changed further in program

int main() {

    int r = 5;
    cout<<"Area of circle: "<<PI * r * r;

    return 0;
}