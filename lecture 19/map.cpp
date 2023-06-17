#include<iostream>
#include<map>
using namespace std;

int main() {

    // # Description
    // - Uses Red-Black, Balanced Trees.
    // - Maintains the sorted order.
    // - Most of like insert, find, count, erase etc -> O(log n) time complexity.

    map<int, string> mp;

    // 2 ways to map values in map
    // #1
    mp[1] = "hello";
    mp[4] = "wow";
    mp[3] = "nice";
    mp[2] = "gg";
    mp[3] = "noice";

    // #2
    mp.insert({12, "great"});
    mp.insert({22, "what the heck"});

    for(auto it: mp) {
        cout<<it.first<<" "<<it.second<<endl;
    }cout<<endl;

    auto it = mp.find(4);
    while(it != mp.end()) {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        it++;
    }cout<<endl;


    cout<<"After erase: "<<endl;
    mp.erase(12);
    for(map<int, string> :: iterator itr=mp.begin(); itr!=mp.end(); itr++) {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }





    return 0;
}