#include<bits/stdc++.h>
using namespace std;

void printArray(auto arr[], int length) {
    for(int i=0; i<length; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    // declare of array
    // have garbage value inside array
    int name[5];

    // defining values
    string dost[5] = {"ashish", "ayush", "sandeep", "chandra", "basar"};

    // initialising array with 0 value
    //! arr[10000] = {0} this line will initialise all the places with 0 value
    //! this = {0} works in 0 case only. if we do arr[100] = {1} this will initialise at 0th index only.
    int arr[10000] = {0};

    int sum[10000];
    //? present in <algorithms.h>
    // fill_n(array_name, length, value);
    fill_n(sum, 10000, 5);
    // printArray(sum, 10000);


    // character array
    char five[5] = {'a', 'b', 'c', 'd', 'e'};
    printArray(five, 5);


    return 0;
}