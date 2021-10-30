#include <iostream>

//This program will get two numbers, add them and print their sum.
int main(void) {
// declaring variables
int num1, num2, sum;
std::cout << "Enter first num: ";
std::cin >> num1;
std::cout << "Enter second num: ";
std::cin >> num2;
sum = num1 + num2;
std::cout << "The sum of numbers is " << sum << "\n";
}