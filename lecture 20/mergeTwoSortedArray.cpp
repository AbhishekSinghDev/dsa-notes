#include<bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
	vector<int> res;
	int left = 0;
	int right = 0;

	while((left < m) && (right < n)) {
		if(arr1[left] <= arr2[right]) {
			res.push_back(arr1[left]);
			left++;
		}
		else {
			res.push_back(arr2[right]);
			right++;
		}
	}

	// right array is exhausted
	while(left < m) {
		res.push_back(arr1[left]);
		left++;
	}
	
	// left array is exhausted
	while(right < n) {
		res.push_back(arr2[right]);
		right++;
	}

	return res;
}

int main() {

    

    return 0;
}