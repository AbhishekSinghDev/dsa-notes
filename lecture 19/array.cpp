#include<iostream>
#include<array>
using namespace std;

int main() {

    // # Description
    // - same as simple array.
    // - the internal declaration of arraySTL is same as normal array.
    // - both are static.

    array<int, 5> a = {1,2,3,4,5};
    
    cout<<"Size: "<<a.size()<<endl;
    cout<<"Empty: "<<a.empty()<<endl;
    cout<<"Front: "<<a.front()<<endl;
    cout<<"Back: "<<a.back()<<endl;

    return 0;
}