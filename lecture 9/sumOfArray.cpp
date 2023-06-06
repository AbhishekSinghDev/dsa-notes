#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int len) {
    
    int sum = 0;
    for(int i=0; i<len; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    int len;
    cout<<"Enter the length of array: ";
    cin>>len;

    int number[len];

    cout<<"Enter the values of array: ";
    for(int i=0; i<len; i++) {
        cin>>number[i];
    }

    cout<<"Sum of array: "<<getSum(number, 5);

    return 0;
}