#include<iostream>
#include<queue>
using namespace std;

int main() {

    // # Description
    // - Uses max_heap by default.
    // - If we try to pop the maximum element will be poped.
    // - We can change it to min_heap.

    // max_heap
    priority_queue<int> max_h;


    // min_heap
    priority_queue<int, vector<int>, greater<int>> min_h;


    max_h.push(4);
    max_h.push(0);
    max_h.push(9);
    max_h.push(1);
    max_h.push(2);
    max_h.push(3);

    int n = max_h.size();
    for(int i=0; i<n; i++) {
        cout<<max_h.top()<<" ";
        max_h.pop();
    }

    cout<<endl;

    min_h.push(4);
    min_h.push(0);
    min_h.push(9);
    min_h.push(1);
    min_h.push(2);
    min_h.push(3);

    int m = min_h.size();
    for(int i=0; i<m; i++) {
        cout<<min_h.top()<<" ";
        min_h.pop();
    }

    cout<<endl<<"Empty: "<<min_h.empty();

    return 0;
}