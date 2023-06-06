#include<bits/stdc++.h>
using namespace std;


//? linear search 
//! search's one by one
int isPresent(int arr[], int length, int key) {
    
    int isPresent = 0;
    for(int i=0; i<length; i++) {
        if(arr[i] == key) return isPresent=1;
    }
    return isPresent;
}

int main() {

    int arr[5] = {-1,3,5,-6,9};
    int key;
    cout<<"Enter value to find: ";
    cin>>key;

    if(isPresent(arr, 5, key)) cout<<"Present";
    else cout<<"Not Present";

    return 0;
}