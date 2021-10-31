#include <iostream>

// This program will get temperature in fahrenheit, convert it into celcius and print their result.
int main(void) {
float fahrenheit, celcius;
std:: cout << "Enter temperature in Fahrenheit: ";
std:: cin >> fahrenheit;
celcius = 5 / 9 * (fahrenheit - 32);
std:: cout << "Your temperature in Celsius is: " << celcius << "\n";

}