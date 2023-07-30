#include<iostream>
using namespace std;

void say(int n) {
    switch(n) {
        case 1:
            cout<<"One ";
            break;
        case 2:
            cout<<"Two ";
            break;
        case 3:
            cout<<"Three ";
            break;
        case 4:
            cout<<"Four ";
            break;
        case 5:
            cout<<"Five ";
            break;
        case 6:
            cout<<"Six ";
            break;
        case 7:
            cout<<"Seven ";
            break;
        case 8:
            cout<<"Eight ";
            break;
        case 9:
            cout<<"Nine ";
            break;
        case 0:
            cout<<"Zero ";
            break;
        default:
            cout<<"Invalid digit ";
    }
}

void sayDigits(int n) {
    if(n <= 0) return;

    sayDigits(n/10);
    say(n%10);
}

int main() {

    int num;
    cout<<"Enter number: ";
    cin>>num;

    sayDigits(num);

    return 0;
}