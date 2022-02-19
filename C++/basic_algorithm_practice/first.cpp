// Write a C++ program to compute the sum of the two given integer values.
// If the two values are the same, then return triple their sum.
// triple means that if a user input the same two numbers for example
// 2, 2 => 2 + 2 = 4 * 3 = 12

#include <iostream>

using namespace std;

int main() {
    int num1, num2, result;
    cout << "Enter two numbers to add: \n";
    cin >> num1 >> num2;
    if (num1 == num2) {
        result = (num1 + num2) * 3;
        cout << result << "\n";
    } else {
        result = num1 + num2;
        cout << result << "\n";
    }
}