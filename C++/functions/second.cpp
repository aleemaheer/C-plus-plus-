// This program will get the number to print the table and get the range of the table
// The purpose of this program to understand the function concepts in C++

#include <iostream>

using namespace std;

void table(int num, int range) {
    int i;
    for (i = 1; i <= range; i++) {
        cout << num << " X " << i << " = " << num * i << "\n";
    }

} 

int main() {
    int num, range;
    cout << "Enter number to print table: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;
    table(num, range);
}