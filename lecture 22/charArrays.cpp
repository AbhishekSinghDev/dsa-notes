#include <bits/stdc++.h>
using namespace std;

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[20];

    // in char arrays dosen't need to run a loop to input the values
    cout << "Enter your name: ";
    // problem here: if we give input: abhishek singh
    /*
    name will be storing only the the 1st word abhishek and singh
    will be rejected becoz the space between them terminates the
    input. by cin>>.
    */
    cin >> name;

    // name[4] = '\0';
    // abhi\0shek\0
    // abhi - printed

    cout <<"name: "<<name<<endl;
    /*
    now cout will print only the abhi part becoz at the 4 position
    (0-based indexing) now contain \0 char which terminates the string.
    */

    cout<<"Length of string: "<<getLength(name)<<endl;

    char test[50];
    cin.getline(test, 50, '\t');
    cout<<test;

    return 0;
}