#include <iostream>

// This program will get temperature in fahrenheit, convert it into celcius and print their result.

using namespace std;

int main(void) {
float fahrenheit, celcius;
cout << "Enter temperature in Fahrenheit: ";
cin >> fahrenheit;
celcius = fahrenheit - 32;
celcius = celcius * 5;
celcius = celcius / 9;
cout << "Your temperature in Celsius is: " << celcius << "\n";

}