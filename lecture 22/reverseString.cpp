#include<bits/stdc++.h>
using namespace std;

int getSize(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void reverseString(char name[]) {
    int left = 0;
    int right = getSize(name)-1;

    while(left <= right) {
        swap(name[left], name[right]);
        left++;
        right--;
    }
}

int main() {

    char name[] = "Abhishek Singh";
    reverseString(name);
    cout<<name;

    return 0;
}