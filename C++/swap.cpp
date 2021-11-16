#include <iostream>
// This program will get two numbers, swap their values and print the numbers after and before
// swaping the values
int main() {
    int a, b, c;
    std::cout << "Enter num1: ";
    std::cin >> a;
    std::cout << "Enter num2: ";
    std::cin >> b;
    std::cout << "Before swaping the values :)\n";
    std::cout << "Num1: " << a << "\n";
    std::cout << "Num2: " << b << "\n";
    c = a;
    a = b;
    b = c;
    std::cout << "After swaping the values :)\n";
    std::cout << "Num1: " << a << "\n";
    std::cout << "Num2: " << b << "\n";
}