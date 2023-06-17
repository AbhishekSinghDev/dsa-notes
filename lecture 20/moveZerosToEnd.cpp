#include<bits/stdc++.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr) 
{
	
	int z = 0;
	for(int i=0; i<arr.size(); i++) {
		if(arr[i] != 0) {
			swap(arr[i], arr[z]);
			z++;
		}
	}
}

int main() {

    

    return 0;
}