#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Welcome here, \nEnter a year, this program will tell you that the year is leap year or not: ";
    cin >> year;
    if (year %4 == 0) {
        cout << "This is a leap year.";
    }
    else {
        cout << "This is not a leap year.";
    }
}