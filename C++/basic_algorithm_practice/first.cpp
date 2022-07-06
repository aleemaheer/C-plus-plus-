// Write a C++ program to compute the sum of the two given integer values.
// If the two values are the same, then return triple their sum.
// triple means that if a user input the same two numbers for example 
// 2, 2 => 2 + 2 = 4 * 3 = 12


#include <iostream>

using namespace std;

int check(int num1, int num2) {
    return num1 == num2 ? (num1 + num2)* 3 : num1 + num2;
}

int main() {
    int num1, num2, answer;
    cout << "Enter to numbers: \n";
    cin >> num1 >> num2;
    answer = check(num1, num2);
    cout << answer << endl;
}
