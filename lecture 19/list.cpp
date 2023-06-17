#include<iostream>
#include<list>
using namespace std;

int main() {

    // # Description
    // - Internal usage of doubly-linked list to implement list.
    // - All the methods almost same.
    // - We cannot directly access through the index.

    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    // l -> 4 3 1 2

    for(auto it: l) {
        cout<<it<<" ";
    }

    // rest all functions like front, back, size, erase etc are same.

    return 0;
}