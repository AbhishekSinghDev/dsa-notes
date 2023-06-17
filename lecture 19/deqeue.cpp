#include<iostream>
#include<deque>
using namespace std;

int main() {

    // # Explanation
    // - It is a double ended queue
    // - push to back and front also
    // - pop'ed from front and back both side

    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    // d -> 4 3 1 2

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Back: "<<d.back()<<endl;

    cout<<"Before removal: "<<endl;
    for(auto it: d) cout<<it<<" ";
    cout<<endl;
    // removing the first element
    d.erase(d.begin(), d.begin()+1);
    // deqeue_name.erase(starting_iterator, iterator_till_where_to_delete);
    cout<<"After remvoal: "<<endl;
    for(auto it: d) cout<<it<<" ";
    cout<<endl;


    d.pop_front();
    cout<<"After popping from front: ";
    for(auto it: d) cout<<it<<" ";
    cout<<endl;


    d.pop_back();
    cout<<"After popping from back: ";
    for(auto it: d) cout<<it<<" ";



    return 0;
}