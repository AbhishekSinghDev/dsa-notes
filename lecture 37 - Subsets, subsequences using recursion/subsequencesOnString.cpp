#include<bits/stdc++.h>
using namespace std;

void solve(string &str, string &ds, vector<string> &res, int i) {

	// base case
	if(i >= str.size()) {
		if(ds.empty()) return;
		res.push_back(ds);
		return;
	}

	// pick it
	ds.push_back(str[i]);
	solve(str, ds, res, i+1);
	ds.pop_back();

	// do not pick it
	solve(str, ds, res, i+1);
}


//! This can be solved using bit manupulation also
void solveBit(string &str,vector<string> &ans) {

	int len = str.size();
	for(int i=0; i<=pow(2, len-1); i++) {
		string temp;
		for(int j=0; j<=len-1; j++) {
			if((1 << j) & i) {
				temp.push_back(str[j]);
			}			
		}
		ans.push_back(temp);
	}
}

vector<string> subsequences(string str){
	
	// Write your code here

	// using recursion
	vector<string> res;
	string ds;
	solve(str, ds, res, 0);

	// using bit manupulation
	// solveBit(str, res); - this is not working right know but the way of doing it is correct

	return res;
}


int main() {



    return 0;
}