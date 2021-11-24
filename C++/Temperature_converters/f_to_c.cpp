#include <iostream>

// This program will get temperature in fahrenheit, convert it into celcius and print their result.

using namespace std;

int main(void) {
float fahrenheit, celcius;
cout << "Enter temperature in Fahrenheit: ";
cin >> fahrenheit;
celcius = 5 / 9 * (fahrenheit - 32);
cout << "Your temperature in Celsius is: " << celcius << "\n";

}