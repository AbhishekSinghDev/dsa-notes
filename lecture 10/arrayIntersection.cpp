#include<bits/stdc++.h>
using namespace std;

//- Code Studio
//? Intersection Of Two Sorted Arrays
/*
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Input:  1 2 2 2 3 4
        2 2 3 3
Output:     2 2 3

*/
 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;

	int left = 0;
	int right = 0;
	
	while((left < n) && (right < m)) {
		if(arr1[left] == arr2[right]) {
			ans.push_back(arr1[left]);
			left++;
			right++;
		}
		else if(arr1[left] < arr2[right]) left++;
		else right++;
	}

	return ans;
}

int main() {

    

    return 0;
}