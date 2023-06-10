#include<bits/stdc++.h>
using namespace std;

//! Find unique element in array.
//! Ex: [1,1,2,2,3,3,4] ==> 4 is non-repeating element
int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for(int i=0; i<size; i++) {
        ans ^= arr[i];
    }

    return ans;
}

int main() {

    

    return 0;
}