#include<iostream>
#include<set>
using namespace std;

int main() {

    // # Description
    // - Internally the BST is used to implement
    // - Stores all the unique elements
    // - Store in soted order

    set<int> s;

    // O(log n) -> time complexity of insert function
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(2);

    cout<<"Before Erase: ";
    for(auto it: s) {
        cout<<it<<" ";
    }cout<<endl;

    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);

    cout<<"After Erase: ";
    for(auto it: s) {
        cout<<it<<" ";
    }cout<<endl;


    // count() -> O(log n) time complexity
    cout<<"Element present or not: "<<s.count(2)<<endl;

    // find() -> O(log n) time complextiy
    set<int> :: iterator itr = s.find(4);    // returns an iterator of position
    while(itr != s.end()) {
        cout<<*itr<<" ";
        itr++;
    }



    return 0;
}