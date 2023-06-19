#include <bits/stdc++.h>
using namespace std;

// Problem link :- https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186
#include <bits/stdc++.h>
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{

    // Write your code here.
    vector<int> ans;
    int carry = 0;

    int i = n - 1;
    int j = m - 1;
    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // case1: only 1st array is still left
    while (i >= 0)
    {
        int val1 = a[i];
        int sum = val1 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // case2: only 2nd array is still left
    while (j >= 0)
    {
        int val2 = b[j];
        int sum = val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // case3: only carry left
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // since ans is pushed in reverse.So;
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}