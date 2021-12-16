// Program to check that the number is prime or not

#include <iostream>

using namespace std;

int main () {
    int i, n;
    int flag = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i <= (n-1); i++) {
        if ( n % i == 0) {
            flag = 1;
        }
    }
    if (flag == 1) {
        cout << "Not a prime number\n";
    } else {
        cout << "Prime number\n";
    }
}