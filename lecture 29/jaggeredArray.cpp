#include<iostream>
using namespace std;

int main() {

    int row;
    cout<<"Enter row: ";
    cin>>row;

    int **arr = new int *[row];
    for(int i=0; i<row; i++) {
        int col;
        cout<<"Enter column: ";
        cin>>col;

        arr[i] = new int[col];
    }

    

    return 0;
}