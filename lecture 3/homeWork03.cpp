#include<iostream>
using namespace std;

int main() {

    // convert fahrenheit to celsius
    // formula - (32°F − 32) × 5/9 = 0°C

    float fahrenheit;
    cin>>fahrenheit;

    float celsius = (fahrenheit - 32) * 5/9;
    cout<<"Celsius: "<<celsius;

    return 0;
}