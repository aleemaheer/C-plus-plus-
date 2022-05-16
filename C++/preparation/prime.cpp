#include <iostream>

using namespace std;

int main() {
    int n, f = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n -1; i > 1; i--)
        if (n % i == 0) {
            f = 1;
            break;
        }
    if (f != 0)
        cout << "Not even Number\n";
    else 
        cout << "Even number\n";
}