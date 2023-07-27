#include<iostream>
using namespace std;

void update1(int &n) {  // n is an reference variable means refer to same memory location which is passed to function
    n++;    // updation done on original memory was passed
}
void update2(int n) {
    n++;    // local variable incremented
}
int& returnByReference(int n) {
    int &ans = n;
    return ans;

    // Gives warning becoz ans is reference variable and n also but both will be distroyed after the function close braket so the memory refered by them is now returned fromt he function. This is bad practice. May be the memory returned by ans variable is now occupied by some other application. ---> BAD PRACTICE
}
int* returnByPointer(int n) {
    int *k = &n;
    return k;

    // Again the same problem as return by reference memory is now occupied by someone else
    // Gives warning becoz ans is reference variable and n also but both will be distroyed after the function close braket so the memory refered by them is now returned fromt he function. This is bad practice. May be the memory returned by ans variable is now occupied by some other application. ---> BAD PRACTICE
}

int main() {

    // Reference Variable
    // - Same memory but different names

    int i = 5;
    int &j = i;

    cout<<"i: "<<i<<endl;
    i++;
    cout<<"i: "<<i<<endl;
    j++;
    cout<<"i: "<<i<<endl;
    cout<<"j: "<<j<<endl;


    // Pass by reference 
    int k = 10;
    cout<<"Pass by reference"<<endl;
    cout<<"Before: "<<k<<endl;
    update1(k);
    cout<<"After: "<<k<<endl;

    // Pass by value
    int n = 100;
    cout<<endl<<"Pass by value"<<endl;
    cout<<"Before: "<<n<<endl;
    update2(n);
    cout<<"After: "<<n<<endl;

    // Return by reference
    int a = 99;
    cout<<returnByReference(a); // Gives warning 

    return 0;
}