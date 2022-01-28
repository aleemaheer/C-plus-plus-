#include <iostream>

using namespace std;

int main() {
    int i, a[10], number;
    // filling the array with values
    cout << "Enter a number: \n";
    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }
    // Arranging the array
    int temp = 0, j;
    for ( j = 0; j < 10; j++) {
        if (temp < a[j]) {
            temp = a[j];
        }
    }
}