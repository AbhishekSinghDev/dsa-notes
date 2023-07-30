#include<iostream>
using namespace std;

// Problem link: https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=0

int distinctWays(int n) {
    if(n == 0) return 1;
    if(n < 0) return 0;

    return distinctWays(n-1) + distinctWays(n-2);
    /* 
        Explanation

        2 Ways to reach nth stair
        - by taking 2 steps
        - by taking 1 step

        2 Ways to be at initial stair 
        - underground stair n < 0 = 0 ways
        - on 0th stair n == 0 = 1 ways
    */
}

int countDistinctWays(int nStairs) {
    return distinctWays(nStairs);
}

int main() {


    return 0;
}