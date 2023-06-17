#include<iostream>
#include<vector>
using namespace std;

int main() {

    // # Vector
    // - same as array but the main 
    //   difference is vector is dynamic in nature which means 
    //   it can change it's size on runtime.  

    vector<int> v;
    vector<int> a(5, 1);    // (size, element_to_fill_with)
    vector<int> c(a);       // here a is copied to c

    // capacity is always different from size
    // capacity -> the maximum vector can store, after the size overflow it doubles the previous size and copy element to new vector. old is discarded.
    // size -> size is something the number of element present in the vector.
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    // push the element at last
    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity: "<<v.capacity()<<endl;

    // removes the last element from the vector.
    v.pop_back();


    cout<<"At: "<<v.at(2)<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    // clear the array, size -> 0 but capacity is still the previous (the memory allocated to it remain same).
    cout<<endl;
    cout<<"Before clear: ";
    for(auto it: v) cout<<it<<" ";
    v.clear();
    cout<<endl;
    cout<<"After clear: ";
    for(auto it: v) cout<<it<<" ";
    cout<<endl;
    cout<<"Size after clear: "<<v.size()<<endl;
    cout<<"Capacity after clear: "<<v.capacity();

    return 0;
}