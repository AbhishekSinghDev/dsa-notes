#include<iostream>
using namespace std;

void update(int **pt2) {
    // pt2 = pt2 + 1;
    // Any change - NO

    // *pt2 = *pt2 + 1;
    // Any change - YES (value change of ptr)

    **pt2 = **pt2 + 1;
    // Any change - YES (value change of k)
}

int main() {

    // Double Pointers
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;  // double pointer **

    // Printing value of i by different ways
    cout<<"i: "<<i<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"**ptr2: "<<**ptr2<<endl;

    cout<<endl;
    // Printing address of i by different ways
    cout<<"&i: "<<&i<<endl;
    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr2: "<<*ptr2<<endl;

    cout<<endl;
    // Printing address of ptr by different ways
    cout<<"&ptr: "<<&ptr<<endl;
    cout<<"ptr2: "<<ptr2<<endl;


    cout<<endl;
    // Double Pointers with Functions
    int k = 5;
    int *pt = &k;
    int **pt2 = &pt;

    cout<<"Before: "<<k<<endl;
    cout<<"Before: "<<pt<<endl;
    cout<<"Before: "<<pt2<<endl;
    update(pt2);
    cout<<"After: "<<k<<endl;
    cout<<"After: "<<pt<<endl;
    cout<<"After: "<<pt2<<endl;


    return 0;
}