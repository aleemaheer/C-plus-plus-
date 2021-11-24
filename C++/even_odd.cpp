#include <iostream>
// This program will get a number from user and check that it's even or odd 
// and print that the number is even or odd.

using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "The number you entered is even.\n";
    }
    else {
        cout << "The number you entered is odd.\n";
    }
}