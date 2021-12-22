// This program will get two numbers from the user and add them until the 
// users presses the 0 button

#include <iostream>

using namespace std;

int main() {
    int num1, num2, sum;
    cout << "Enter a first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    while (num1 != 0 && num2 != 0) {
        sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is " << sum << "\n";
        cout << "Enter a first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
}