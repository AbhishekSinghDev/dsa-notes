#include<iostream>
using namespace std;

int main() {

    // int num = 5;
    // // & - Address of operator 
    // cout<<"Address of num: "<<&num<<endl;

    // // *ptr - pointer which stores address's of variables
    // // int *p; - this is a bad practice becoz p will hold some garbage value which can be a random address.

    // int *ptr = &num;
    // cout<<"Value in ptr: "<<*ptr<<endl;
    // cout<<"Address in ptr: "<<ptr<<endl;

    // // size of pointer always - 8 or 4 depends on machine (mostly 8)
    // cout<<"Size of ptr: "<<sizeof(ptr)<<endl;

    // double n = 10.6;
    // double *p = &n;
    // cout<<"Value in ptr: "<<*ptr<<endl;
    // cout<<"Address in ptr: "<<ptr<<endl;
    // cout<<"Size of ptr: "<<sizeof(ptr);

    // // copying pointer to pointer
    // int i = 10;
    // int *t = &i;
    // int *q = t;

    // cout<<"Value at t and q: "<<t<<" "<<q;

    // pointer airthmetic
    int k = 100;
    int *y = &k;
    cout<<((*y)++)<<endl;
    *y = *y + 2;
    cout<<*y<<endl;

    // simple increment to pointer increments pointer according to the size of datatype like y = 100 of int type so y++ will be 104 not 101.
    cout<<y<<endl;
    y++;
    cout<<y<<endl;

    return 0;
}