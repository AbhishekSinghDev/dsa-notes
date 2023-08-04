#include<iostream>
using namespace std;

/*
    * Quick sort
    
    ? Algorithm
        * 1. Do partition
             -- consider 1st element as pivot element
             -- count all the small or equal to elements in array 
             -- find right place/index that pivot element should be if sorted array was there pivotIndex = start + count
             -- place the pivot element at correct position swap()
             -- Now, make sure <p | p | p< elements in array. in left half should contain element less thant or equal to pivot and 
                on the right half elements should contain elements greater than pivot element.
                - then array can be considered as two parts
                  - [start...pivot-1]
                  - [pivot+1....start]
                - now create two pointers low = start, high = end
                - know swap low with high when only arr[low] <= pivotElement or arr[high] > pivotElement
             -- return pivotIndex

        * 2. Recursive calls
             -- call quick sort for left array
                - quickSort(arr, start, p-1);
                - quickSort(arr, p+1, end);

        * 3. Base case
             -- single or no element in the array means array is sorted 
                - if(start >= end) return;

*/

int partition(int arr[], int start, int end) {

    int pivot = arr[start];

    // count all the elements less than pivot element
    int count = 0;
    for(int i=start+1; i<=end; i++) {
        if(arr[i] <= pivot) count++;
    } 

    // Place pivot element to right place
    int pivotIndex = count + start;
    swap(arr[pivotIndex], arr[start]);

    int low = start;
    int high = end;

    while(low < pivotIndex && high > pivotIndex) {

        while(arr[low] <= pivot) low++;
        while(arr[high] > pivot) high--;

        if(low < pivotIndex && high > pivotIndex) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }

    return pivotIndex;
}

// Quick sort
void quickSort(int arr[], int start, int end) {

    // base case - single or no elements array is already sorted
    if(start >= end) return;

    int p = partition(arr, start, end);

    // Recursive calls
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
}

int main() {

    int arr[] = {3,4,6,9,1,2,7,4};
    int len = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, len-1);

    for(int i=0; i<len; i++) {
        cout<<*(arr+i)<<" ";
    } cout<<endl;

    return 0;
}