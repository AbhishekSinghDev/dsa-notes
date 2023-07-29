#include<iostream>
using namespace std;

/*
    * Recursion
    ? When a function call itself directly or indirectly.

    * Components of recursive function
    ? 1. Base case: Mandatory (where to stop). Without base case Segmentation fault -> Stack overflow.
    ? 2. Recursive relation: Mandatory (breaks the problem in smaller problem).
    ? 3. Proccessing: Optional (++, --, *, /) others.
*/

// printing n to 1 using recursion
void printN(int n) {

    // base case
    if(n == 0) 
        return;
    
    // Proccessing
    cout<<n<<" ";

    // Recursive relation
    printN(n-1);
}

// calculating power of 2
int power(int n) {

    // base case
    if(n == 0) 
        return 1;

    return 2 * power(n-1);
}

// factorial 
int factorial(int n) {

    // base case
    if(n == 0) return 1;

    return n * factorial(n-1);
}

int main() {

    int n;
    cin>>n;
    // printN(n);
    // cout<<"Ans: "<<power(n);
    cout<<"Factorial: "<<factorial(n);

    return 0;
}