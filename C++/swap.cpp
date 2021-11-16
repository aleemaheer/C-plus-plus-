#include <iostream>
int main() {
    int a, b, c;
    std::cout << "Enter num1: ";
    std::cin >> a;
    std::cout << "Enter num2: ";
    std::cin >> b;
    c = a;
    a = b;
    b = c;
    std::cout << "Num1: " << a << "\n";
    std::cout << "Num2: " << b << "\n";
}