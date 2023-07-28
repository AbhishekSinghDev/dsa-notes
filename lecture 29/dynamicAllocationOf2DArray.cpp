#include<iostream>
using namespace std;

int main() {

    // creating a 2d array using dynamic memory allocation
    int n;
    cout<<"Enter row: ";
    cin>>n;
    int m;
    cout<<"Enter column: ";
    cin>>m;


    int **arr = new int*[n];
    for(int i=0; i<n; i++) {
        arr[i] = new int[m];
    }

    // Taking input
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];
        }
    }

    // Printing the 2d array
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // Releasing memory
    for(int i=0; i<n; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}