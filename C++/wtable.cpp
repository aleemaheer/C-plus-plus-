#include <iostream>

using namespace std;

int main() {
    int i = 1, result = 1, num, range;
    cout << "Enter a number to print table: ";
    cin >> num;
    cout << "Enter range: ";
    cin >> range;
    while (i <= range ) {
        result = num * i;
        cout << num << " X " << i << " = " << result << "\n";
        i++;
    }
}