#include<bits/stdc++.h>
using namespace std;

// Pattern to print
// * * * *
// * * * *
// * * * *
// * * * *
void print_pattern_1(int row, int col) {

    for(int i=0; i<row; i++) {
        for(int j=0; j<4; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Pattern to print 
// *
// * *
// * * *
// * * * *
void print_pattern_2(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Pattern to print
// 1
// 1 2
// 1 2 3
// 1 2 3 4
void print_pattern_3(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<=i; j++) {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
void print_pattern_4(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<=i; j++) {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// * * * *
// * * *
// * * 
// *
void print_pattern_5(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<row-i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Pattern to print
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2
// 1
void print_pattern_6(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<row-i; j++) {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
//     *
//    * *
//   * * *
//  * * * *
void print_pattern_7(int row) {
    for(int i=0; i<row; i++) {

        for(int s=0; s<row-i-1; s++) {
            cout<<" ";
        }
        for(int j=0; j<(2*i)+1; j++) {
            cout<<"*";
        }
        for(int s = 0; s<row-i-1; s++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
//     *********
//      *******
//       *****
//        ***
//         *
void print_pattern_8(int row) {
    for(int i=0; i<row; i++) {
        for(int s=0; s<i; s++) {
            cout<<" ";
        }
        for(int j=0; j<(2*row - ((2*i)+1)); j++) {
            cout<<"*";
        }
        for(int s=0; s<i; s++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
//         *
//        * *
//       * * *
//      * * * *
//      * * * *
//       * * *
//        * *
//         *
void print_pattern_9(int row) {
    // sometimes do smartwork not hardwork
    // we can combine two patterns also to one
    print_pattern_7(row >> 1);
    print_pattern_8(row >> 1);
}

// Pattern to print
// *
// * *
// * * * 
// * * * *
// * * * * *
// * * * *
// * * * 
// * *
// *
void print_pattern_10(int row) {
    for(int i=1; i<=2*row-1; i++) {
        int stars = i;
        if(i > row) stars = 2*row - i;
        for(int j=1; j<=stars; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

// Pattern to print
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
void print_pattern_11(int row) {
    int start = 1;
    for(int i=0; i<row; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++) {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }
}

// Pattern to print
// 1      1
// 12    21
// 123  321
// 12344321
void print_pattern_12(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<=i; j++) {
            cout<<j+1<<" ";
        }
        for(int s=0; s<(2*row - 2*(i+1)); s++) {
            cout<<"  ";
        }
        for(int j=i; j>=0; j--) {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void print_pattern_13(int row) {
    int counter = 1;
    for(int i=0; i<row; i++) {
        for(int j=0; j<=i; j++) {
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
}

// Pattern to print
// A
// A B
// A B C
// A B C D
// A B C D E 
void print_pattern_14(int row) {
    for(int i=0; i<row; i++) {
        for(char j='A'; j<='A'+i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// ABCDE
// ABCD
// ABC
// AB
// A
void print_pattern_15(int row) {
    for(int i=0; i<row; i++) {
        for(char j='A'; j<'A'+row-i; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// A
// BB
// CCC
// DDDD
// EEEEE
void print_pattern_16(int row) {
    for(int i=0; i<row; i++) {
        char a = 'A' + i;
        for(char j=0; j<=i; j++) {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
//     A
//    ABA
//   ABCBA
//  ABCDCBA
void print_pattern_17(int row) {
    for(int i=0; i<row; i++) {
        for(int s=0; s<row-i-1; s++) {
            cout<<" ";
        }

        char ch = 'A';
        int breakpoint = (2*i+1) / 2;
        for(int j=1; j<=2*i+1; j++) {
            cout<<ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }

        for(int s=0; s<row-i-1; s++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// E
// D E
// C D E
// B C D E
// A B C D E
void print_pattern_18(int row) {
    for(int i=0; i<row; i++) {
        for(char j='E'-i; j<='E'; j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// Pattern to print
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
void print_pattern_19(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<row-i; j++) {
            cout<<"*";
        }
        for(int s=0; s<2*i; s++) {
            cout<<" ";
        }
        for(int j=0; j<row-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<row; i++) {
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
        for(int s=0; s<row*2-2*i; s++) {
            cout<<" ";
        }
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {

    int row, col;
    cout<<"Enter the row and col: ";
    cin>>row>>col;

    // print_pattern_1(row, col);
    // print_pattern_2(row);
    // print_pattern_3(row);
    // print_pattern_4(row);
    // print_pattern_5(row);
    // print_pattern_6(row);
    // print_pattern_7(row);
    // print_pattern_8(row);
    // print_pattern_9(row);
    // print_pattern_10(row);
    // print_pattern_11(row);
    // print_pattern_12(row);
    // print_pattern_13(row);
    // print_pattern_14(row);
    // print_pattern_15(row);
    // print_pattern_16(row);
    // print_pattern_17(row);
    // print_pattern_18(row);
    print_pattern_19(row);
    

    return 0;
}
