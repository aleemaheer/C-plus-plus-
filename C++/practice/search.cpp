// Searching from an array

#include <iostream>

using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n, f = 0;
    cout << "Enter a number to search: ";
    cin >> n;
    for (int i = 0; i <= 4; i++) {
        if (n == a[i]){
            cout << "The number " << n << " is founded at index " << a[i] << endl;
            f = 1;
        }
    }
    if (f == 0) 
    cout << "The number " << n << " is not found." << endl;
}