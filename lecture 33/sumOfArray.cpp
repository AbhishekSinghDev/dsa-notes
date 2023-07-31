#include<iostream>
using namespace std;

// return array sum 
int getArraySum(int arr[], int length, int i) {
    // base case
    if(i >= length) return 0;

    return arr[i] + getArraySum(arr, length, i+1);
}

// lovebabbar's approach
int getSum(int arr[], int length) {
    // base case
    if(length == 0) return 0;

    return arr[0] + getSum(arr+1, length-1);
}


int main() {

    int arr[] = {1,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Sum: "<<getArraySum(arr, n, 0)<<endl;
    cout<<"Sum: "<<getSum(arr, n)<<endl;

    // cout<<*(arr+1);

    return 0;
}