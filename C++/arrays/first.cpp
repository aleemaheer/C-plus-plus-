#include <iostream>

using namespace std;

int main() {
    int array[5], i;
    cout << "Enter 5 numbers: \n";
    // Getting values in an array
    for (i = 0; i < 5; i++) {
        cin >> array[i];
    }
    // Printing values from an array
    for (i = 0; i < 5; i++) {
        cout << "Index No " << array[i] << "- " << array[i] << "\n";
    }


}