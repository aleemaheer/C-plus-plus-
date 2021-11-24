#include <iostream>

//This program will get two numbers, add them and print their sum.

using namespace std;

int main(void) {
// declaring variables
int num1, num2, sum;
cout << "Enter first num: ";
cin >> num1;
cout << "Enter second num: ";
cin >> num2;
sum = num1 + num2;
cout << "The sum of numbers is " << sum << "\n";
}