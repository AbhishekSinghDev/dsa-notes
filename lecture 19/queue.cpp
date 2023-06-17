#include<iostream>
#include<queue>
using namespace std;

int main() {

    // # Description
    // - Follows FIFO order.
    // - FIFO - First In First Out.

    queue<string> q;

    q.push("Abhishek");
    q.push("Singh");
    q.push("Kumar");


    cout<<"Front: "<<q.front()<<endl;
    q.pop();    // pops the top element
    cout<<"Front: "<<q.front()<<endl;

    return 0;
}