#include<bits/stdc++.h>
using namespace std;

/*
    ! Problem: Book Allocation Problem
    Given an array of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book. 
    Allocate books in such a way that:
        1. Each student gets at least one book.
        2. Each book should be allocated to only one student.
        3. Book allocation should be in a contiguous manner.

    If the allocation of books is not possible, return -1.
*/

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] + pageSum <= mid) {
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid) return false;
            pageSum = arr[i];
        }
    }

    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    

    if(m>n) return -1;
    // using binary search
    int start = 0;
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while(start <= end) {
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {

    

    return 0;
}