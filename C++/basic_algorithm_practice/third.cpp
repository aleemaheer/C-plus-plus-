// Write a C++ program to check two given integers, and return true if one
// of them is 30 or if their sum is 30

#include <iostream>

using namespace std;

int check(int num1, int num2) {
    if (num1 == 30 || num2 == 30 || num1 + num2 == 30) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int num1, num2, answer;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    answer = check(num1, num2);
    cout << answer << endl;
}