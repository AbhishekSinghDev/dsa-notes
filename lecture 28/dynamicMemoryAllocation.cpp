#include<iostream>
using namespace std;

/*
    * Basic for Dynamic Memory allocation

    A program come up with two memory
    - Stack (small size)
    - Heap  (larger size)

    ? Stack
    now, in static allocation what happens is at compile time we know how much size is required for the array and program come with bigger stack which can fit a large array.
    - in stack memory automatically freed
    * but, when we do -
    int n;
    cin>>n;
    int arr[n];
    ! This is bad practice becoz it leads to program crash.
    ! Why crash - at compile time program don't know the size of array so it comes up with small size of stack but on runtime if user tries to make a large array then it will not possible to create that size of array in stack so it crashes.

    ? Heap
    now, in dynamic memory allocation memory is created in heap which is generally very large than stack so, it is a good practice to always allocate memory on heap dynamically when we don't know the size of array at compile time.

    * syntax
    ? int *ptr = new int;
    now, 
    Total memory occupied by this statement is 8 + 4 bytes = 12 bytes.
    - pointer = 8 bytes (64 bit system) (32 bit system occupy 4 bytes for pointer)
    - new int = return address of memory block from heap and that address stored by a pointer ptr. int of 4 bytes.
    - Manually needed to free the memroy.

    ? to allocate array on runtime on heap
    ? int *arr = new int[n];  (where n is variable size given by user)


    ! Something Risky / Problematic / Khurafati
    while(true) {
        int *ptr = new int;
    }
    now, memory allocated on stack will be freed automatically (int *ptr)
    but the memory allocated on heap will not be cleared here so it fill the heap and cause system crash or program crash

*/

int getSum(int *arr, int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += *(arr + i); // equal to arr[i], i[arr]
    }
    return sum;
}

int main() {

    // Dynamic Memory Allocation

    int k = 5; // Allocated on stack (static memory allocation)
    int *pt = new int;  // Allocate on heap (dynamic memory allocation)

    // Allocation of array on runtime on heap
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++) {
        cin>>*(arr+i);
    }

    cout<<"Sum of array: "<<getSum(arr, n);

    // delete is used to free the memory on heap
    delete arr;
 
    return 0;
    
}