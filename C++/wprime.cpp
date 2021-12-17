#include <iostream>

using namespace std;

int main() {
    int i = 2, n;
    int flag = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= (n-1)) {
        if ( n % i == 0) {
            flag = 1;
        }
        i++;
    }
    if (flag == 1) {
        cout << "Not a prime number\n";
    } else {
        cout << "prime number\n";
    }
}