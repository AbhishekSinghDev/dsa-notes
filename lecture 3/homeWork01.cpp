#include<iostream>
using namespace std;

int main() {

    // Program to identify the character is number, lowercase, uppercase.
    int s = '4';

    // checking for lowercase
    for(int i=97; i<122; i++) {
        if(s == i) {
            cout<<"lowerCase";
            break;
        }
    }

    // checking for uppercase
    for(int i=65; i<=90; i++) {
        if(s == i) {
            cout<<"upperCase";
            break;
        }
    }

    // checking for number
    for(int i=48; i<=57; i++) {
        if(s == i) {
            cout<<"numericValue";
            break;
        }
    }

    return 0;
}