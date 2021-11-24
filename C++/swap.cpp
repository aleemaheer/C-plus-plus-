#include <iostream>
// This program will get two numbers, swap their values and print the numbers after and before
// swaping the values

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    cout << "Before swaping the values :)\n";
    cout << "Num1: " << a << "\n";
    cout << "Num2: " << b << "\n";
    c = a;
    a = b;
    b = c;
    cout << "After swaping the values :)\n";
    cout << "Num1: " << a << "\n";
    cout << "Num2: " << b << "\n";
}