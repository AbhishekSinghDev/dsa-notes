#include<iostream>
using namespace std;

/*
    ! Default Arguments
    ? Default value is given to function arguments in order to make them independent weither at the time of function value given or not.
    ? If value is given for default argument then function consider the given value.
    ? If no value is passed then default value is taken.
    ? Make arguments optional.

    ! Why default arguments
    ? Make independent
    ? Make optional
    ? Increases reliablity

    ! Caution
    ? In order to make defualt arguments must be made from right to left
    ? If we think to make someone in between argument defualt it shows error must be rightmost arguments of that arguments are default.
    ? Example:
    * printArray(int arr[], int n=0, int start) -> n is given defualt value but start has not given any default value give error.
    * Correct statement printArray(int arr[], int n=0, int start=0) -> rightmost argument is defualt it's correct.
*/

void printArray(int arr[], int n, int start=0) {
    for(int i=start; i<n; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main() {

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;

    printArray(arr, n, 1);

    printArray(arr, n); // no error becoz default value is given to start variable in function

    return 0;
}