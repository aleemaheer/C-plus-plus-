// program to check that the number is prime or not

#include <iostream>

using namespace std;

int main () {
    int i, n;
    int flag = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (i = (n-1); i > 1; i--) {
        if (!(n%i) == 0) {
            flag = 1;
        }
    }
    if (flag == 1) {
        cout << "Prime number\n";
    } else {
        cout << "Not a prime number\n";
    }
}