// Write a C++ program to get the absolute difference between n and 51.
// If n is greater than 51 return triple the absolute difference.
// For example a user input a number 53 which is n, the absolute difference
// between n and 51 is 53 - 51 = 2 is 53 > 51 =? Yes => so return the absolute
// difference 3 * 2 = 6


#include <iostream>

using namespace std;

int check(int num1) {
    int one;
    one = num1 - 51;
    return num1 > 51 ? 3 * one : 51 - num1;
}

int main() {
    int num1, answer;
    cout << "Enter a number: ";
    cin >> num1;
    answer = check(num1);
    cout << answer << "\n";
}