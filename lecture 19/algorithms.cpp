#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<"Vector: ";
    for(auto it: v) cout<<it<<" ";
    cout<<endl;

    cout<<binary_search(v.begin(), v.end(), 3)<<endl;
    cout<<"Max: "<<max(2, 3)<<endl;
    cout<<"Min: "<<min(2, 4)<<endl;

    int a = 4;
    int b = 3;
    swap(a, b);
    cout<<"After swap: "<<a<<" "<<b<<endl;

    string n = "abcd";
    reverse(n.begin(), n.end());
    cout<<n;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate: ";
    for(auto it: v) cout<<it<<" ";
    cout<<endl;



    return 0;
}