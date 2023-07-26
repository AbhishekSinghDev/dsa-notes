#include<iostream>
using namespace std;

// passing arr[], *arr ==> both are the memory of first location not the array is passing.
int getSum(int *arr) {
    int sum = 0;
    for(int i=0; i<5; i++) {
        sum += i[arr];
    }
    return sum;
}

void updatePointer(int *ptr) {
    ptr = ptr + 1;  // This will not change the pointers holding address becoz the address is passed by as a value
}
void updateValue(int *pt) {
    *pt = *pt + 1;  // This will change the actual value at pt's address becoz working happeing on actual address of value
}

int main() {

    // Pointers with arrays 
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    ptr += 1;
    // cout<<"After increment: "<<*ptr;

    // cout<<&arr<<endl;

    int marks[5] = {55,45,89,32,13};
    int *t = marks;

    cout<<"1st: "<<marks<<endl; // first location address
    cout<<"2nd: "<<marks + 1<<endl; // second location address
    cout<<"3rd: "<<*(marks + 1)<<endl; // second location address. 
    cout<<"4th: "<<*(marks) + 1<<endl; // increments the first memory value

    // New Formula discovered or Internal working of arr[i]
    // arr[i] = *(arr + i); // provide correct ans
    // i[arr] = *(i + arr); // provide correct ans

    cout<<"5th: "<<marks[3]<<endl; // arr[i] = *(arr + i)
    cout<<"6th: "<<3[marks]<<endl; // i[arr] = *(i + arr) both are mathematically correct


    // Differences int arr and pointer
    int temp[5] = {1,2,3};
    cout<<"7th: "<<sizeof(temp)<<endl; // 5 * 4
    cout<<"8th: "<<sizeof(&temp)<<endl; // genereally 8 bits but in mine its 4 bits

    int *r = temp;
    cout<<"9th: "<<sizeof(r)<<endl; // pointers size generally 8 bits but in mine its 4 bits
    cout<<"10th: "<<sizeof(*r)<<endl; // prints the size of value in r
    cout<<"11th: "<<sizeof(&r)<<endl; // prints address of pointer 
    cout<<"12th: "<<sizeof(*(r+1))<<endl; // prints the size of second block's value in temp;    

    // Array name - trying to reassign it another memory
    int test[5];
    //test = test + 1;    // Error - Becoz we cannot change symbol table or either test points to first location of array so it cannot be pointed to any other location but after making a pointer which points to test's first location can be changed to another location


    // Char Arrays 
    int nt[5] = {1,2,3,4,5};
    char name[9] = "abhishek"; // why 9 size of char array, 8 size of char's in string + '\0' null char.

    int *intPointer = &nt[0]; // or nt, nt[0], &nt[0]
    char *charPointer = &name[0];

    cout<<"13th Int Pointer: "<<intPointer<<endl;   // prints the address of first location in array (nt)
    cout<<"14th Char Array: "<<name<<endl;          // prints the whole string "abhishek"
    cout<<"15th Char Pointer: "<<charPointer<<endl; // prints the whole string "abhishek". Prints until a null char is appeard
    // why this difference 
    // cout has different implementation with related to integer or string/char array

    // Bad practices
    // using pointer to print a char without a null char ==> RISKY PROCESS / NEVER DO THIS / TYPE OF MEMORY LEAK / UNAUTHORIZED ACCESS
    char n = 'z';
    char *cP = &n;
    cout<<"16th: "<<cP<<endl; // Bad practice prints until a null char appeard. can try to access a read only memory.


    // Fucntions and Pointers
    int check[5] = {1,2,3,4,5};
    cout<<"16th: "<<getSum(check)<<endl;

    int num = 5;
    int *pt = &num;
    cout<<"Before Update: "<<pt<<endl;
    updatePointer(pt);    // This will not change the pointers holding/value address becoz this is passed by value
    cout<<"After Update: "<<pt<<endl;

    // After modifying values/derefence value of pointer
    cout<<"Before: "<<*pt<<endl;
    updateValue(pt);      // This will change the actual value/dereferenced value becoz working happend on original address of 5
    cout<<"After: "<<*pt<<endl;


    return 0;
}