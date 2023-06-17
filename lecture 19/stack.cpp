#include<iostream>
#include<stack>
using namespace std;

int main() {

    // # Description
    // - Follows LIFO order.
    // - LIFO - Last In First Out.

    stack<string> s;

    s.push("Abhishek");
    s.push("Singh");
    s.push("Kumar");

    cout<<"Before pop the top element is: "<<s.top()<<endl;
    s.pop();
    cout<<"After pop the top element is: "<<s.top()<<endl;

    cout<<"Size: "<<s.size()<<endl;

    return 0;
}