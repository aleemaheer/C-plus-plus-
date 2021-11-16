#include <iostream>
// This program will get a number from user and check that it's even or odd 
// and print that the number is even or odd.
int main() {
    int num;
    std::cout << "Enter any number: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "The number you entered is even.\n";
    }
    else {
        std::cout << "The number you entered is odd.\n";
    }
}