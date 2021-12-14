// Program to print a multiplication table
// This program will take two integers from the user, one is range of table and second is the number that we want to print the table of

#include <iostream>

using namespace std;

int main() {
    int i, result = 1, num, range;
    cout << "Enter a number to print a table: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;
    for (i = 1; i <= range; i++) {
        result = num * i;
        cout << num << " X " << i << " = " << result << "\n";
    }
}